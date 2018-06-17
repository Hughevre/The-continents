#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent), 
	object_creator_(this, &spec_object_creator)
{
	ui.setupUi(this);
	QObject::connect(ui.actionInformacje_o_KontynentV3D, &QAction::triggered, this, &MainWindow::OpenHelpMenu);
	QObject::connect(ui.actionDodac, &QAction::triggered, this, &MainWindow::OpenObjectCreator);
	QObject::connect(ui.actionUsunac, &QAction::triggered, this, &MainWindow::DeleteHighlightedObject);

	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

	model_ = new QStringListModel(this);
	model_->setStringList(list_);

	ui.listView->setModel(model_);
	ui.listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

	ui.listView->setSelectionMode(QAbstractItemView::ExtendedSelection);
	QObject::connect(ui.listView, SIGNAL(pressed(const QModelIndex&)), this, SLOT(RefreshImage(const QModelIndex&)));
}

void MainWindow::OpenObjectCreator()
{
	object_creator_.setModal(true);
	object_creator_.setWindowTitle("Dodaj nowy obiekt");
	object_creator_.exec();

	if (spec_object_creator.result() == QDialog::Accepted)
	{
		regions_.push_back(spec_object_creator.get_region());
		list_.append(QString::fromStdString(spec_object_creator.get_region()->get_id()));
		model_->setStringList(list_);

		ui.graphicsView->setScene(&graphics_scene_);

		QString path = QCoreApplication::applicationDirPath() + "/images/pic" + QString::number(spec_object_creator.get_selected_object()) + ".jpg";

		if (pix_map_.load(path))
		{
			graphics_scene_.setSceneRect(pix_map_.rect());
			graphics_scene_.clear();
			graphics_scene_.addPixmap(pix_map_);
			ui.graphicsView->fitInView(pix_map_.rect());
		}

		for (int i = ui.tableWidget->rowCount() - 1; i >= 0; i--)
		{
			ui.tableWidget->removeRow(i);
		}
		
		for (spec_object_creator.it_ = spec_object_creator.get_atribute_value_dictionary().begin(); spec_object_creator.it_ != spec_object_creator.get_atribute_value_dictionary().end(); ++spec_object_creator.it_)
		{
			ui.tableWidget->insertRow(ui.tableWidget->rowCount());
			ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 0, new QTableWidgetItem(QString::fromStdString(std::get<0>(*(spec_object_creator.it_)))));
			ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 1, new QTableWidgetItem(std::get<1>(*(spec_object_creator.it_))));
		}
	}
}

void MainWindow::DeleteHighlightedObject()
{
	if (regions_.isEmpty())
		return;

	std::vector<int> rows_to_delete;

	for (int i = 0; i < spec_object_creator.get_atribute_value_dictionary().size(); ++i)
	{
		if (regions_.at(ui.listView->currentIndex().row()) == std::get<2>(spec_object_creator.get_atribute_value_dictionary().at(i)))
		{
			rows_to_delete.push_back(i);
		}
	}

	std::sort(rows_to_delete.begin(), rows_to_delete.end(), std::greater<int>());

	for (int i = 0; i < rows_to_delete.size(); i++)
	{
		ui.tableWidget->removeRow(rows_to_delete[i]);
	}

	int i;

	for (i = 0, spec_object_creator.it_ =  spec_object_creator.get_atribute_value_dictionary().begin(); i < spec_object_creator.get_atribute_value_dictionary().size(); ++i)
	{
		if (regions_.at(ui.listView->currentIndex().row()) == std::get<2>(spec_object_creator.get_atribute_value_dictionary().at(i)))
		{
			spec_object_creator.get_atribute_value_dictionary().erase(std::remove_if(spec_object_creator.get_atribute_value_dictionary().begin(), spec_object_creator.get_atribute_value_dictionary().end(), [&](std::tuple<std::string, QString, Region*>& element) {return regions_.at(ui.listView->currentIndex().row()) == std::get<2>(element); }), spec_object_creator.get_atribute_value_dictionary().end());
		}
	}
	int l = spec_object_creator.get_atribute_value_dictionary().size();

	regions_.erase(regions_.begin() + ui.listView->currentIndex().row());
	model_->removeRows(ui.listView->currentIndex().row(), 1);
	list_.removeAt(ui.listView->currentIndex().row());
	int t;
	t = 6;
}

void MainWindow::OpenHelpMenu()
{
	QMessageBox message_box;
	message_box.setText("KontynentV3D, Author: Hubert Zajaczkowski, All rights reserved");
	message_box.exec();
}

void MainWindow::resizeEvent(QResizeEvent* e)
{
	QMainWindow::resizeEvent(e);
	if (!pix_map_.isNull())
	{
		pix_map_.scaled(ui.graphicsView->x(), ui.graphicsView->y(), Qt::IgnoreAspectRatio);
		ui.graphicsView->fitInView(pix_map_.rect());
	}
}

void MainWindow::RefreshImage(const QModelIndex& index)
{
	QString path = QCoreApplication::applicationDirPath() + "/images/pic" + QString::number(index.row()) + ".jpg";

	if (pix_map_.load(path))
	{
		graphics_scene_.setSceneRect(pix_map_.rect());
		graphics_scene_.clear();
		graphics_scene_.addPixmap(pix_map_);
		ui.graphicsView->fitInView(pix_map_.rect());
	}
}