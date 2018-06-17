#pragma once

#include "ui_mainwindow.h"
#include "region.h"
#include "objectcreator.h"
#include "specifiedobjectcreator.h"
#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include <QVector>
#include <QStringListModel>
#include <tuple>
#include <QListView>
#include <QStringList>
#include <algorithm>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);
private:
	Ui::MainWindowClass ui;
	ObjectCreator object_creator_;
	SpecifiedObjectCreator spec_object_creator;
	QStringListModel *model_;
	QStringList list_;
	QGraphicsScene graphics_scene_;
	QPixmap pix_map_;
	QVector<Region*> regions_;
public slots:
	void OpenObjectCreator();
	void DeleteHighlightedObject();
	void OpenHelpMenu();
	void resizeEvent(QResizeEvent * e);
	void RefreshImage(const QModelIndex& index);
};
