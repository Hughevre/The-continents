#ifndef OBJECTCREATOR_H
#define OBJECTCREATOR_H

#include "specifiedobjectcreator.h"
#include <QDialog>
#include <QPushButton>
#include <QStringList>
#include <QStringListModel>
#include <QAbstractItemView>

namespace Ui {
class ObjectCreator;
}

class ObjectCreator : public QDialog
{
    Q_OBJECT

public:
    explicit ObjectCreator(QWidget *parent = 0);
	ObjectCreator(QWidget *parent = 0, SpecifiedObjectCreator* spec_object_creator_ = nullptr);
    ~ObjectCreator();
private:
    Ui::ObjectCreator *ui;
	QStringListModel *model_;
	SpecifiedObjectCreator* spec_object_creator_;
public slots:
	void Cancel();
	void Add();
};

#endif // OBJECTCREATOR_H
