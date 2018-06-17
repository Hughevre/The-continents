#include "objectcreator.h"
#include "ui_objectcreator.h"

ObjectCreator::ObjectCreator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ObjectCreator)
{
    ui->setupUi(this);
}

ObjectCreator::ObjectCreator(QWidget *parent, SpecifiedObjectCreator* spec_object_creator) :
	QDialog(parent),
	ui(new Ui::ObjectCreator)
{
	ui->setupUi(this);
	QObject::connect(ui->anuluj_1, &QPushButton::clicked, this, &ObjectCreator::Cancel);
	QObject::connect(ui->dodaj_1, &QPushButton::clicked, this, &ObjectCreator::Add);

	model_ = new QStringListModel(this);
	QStringList list;

	list << "Obszar" << "Ocean" << "Kontynent" << "Panstwo";
	model_->setStringList(list);

	ui->listView->setModel(model_);
	ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);

	spec_object_creator_ = spec_object_creator;
}

ObjectCreator::~ObjectCreator()
{
    delete ui;
}

void ObjectCreator::Cancel()
{
	close();
}

void ObjectCreator::Add()
{
	int row = ui->listView->currentIndex().row();
	spec_object_creator_->set_selected_object(row);
	spec_object_creator_->setModal(true);
	spec_object_creator_->setWindowTitle(model_->stringList().at(row));
	spec_object_creator_->exec();
	accept();
}
