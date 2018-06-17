#include "specifiedobjectcreator.h"
#include "ui_specifiedobjectcreator.h"

SpecifiedObjectCreator::SpecifiedObjectCreator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SpecifiedObjectCreator)
{
    ui->setupUi(this);
	QObject::connect(ui->anuluj_2, &QPushButton::clicked, this, &SpecifiedObjectCreator::Cancel);
	QObject::connect(ui->dodaj_2, &QPushButton::clicked, this, &SpecifiedObjectCreator::Add);
}

SpecifiedObjectCreator::~SpecifiedObjectCreator()
{
    delete ui;
}

void SpecifiedObjectCreator::Cancel()
{
	close();
}

void SpecifiedObjectCreator::Add()
{
	switch (selected_object_)
	{
	case 0:
		region_ = new Region(ui->lineEdit_4->text().toDouble(), nullptr, ui->lineEdit_2->text().toLocal8Bit().constData());
		atribute_value_dictionary_.push_back(std::make_tuple("Identyfikator", ui->lineEdit_2->text(), region_));
		atribute_value_dictionary_.push_back(std::make_tuple("Powierzchnia", ui->lineEdit_4->text(), region_));
		break;
	case 1:
		region_ = new Ocean(ui->lineEdit_2->text().toLocal8Bit().constData(), ui->lineEdit_4->text().toDouble(), ui->lineEdit->text().toDouble(), ui->lineEdit_3->text().toDouble());
		atribute_value_dictionary_.push_back(std::make_tuple("Identyfikator", ui->lineEdit_2->text(), region_));
		atribute_value_dictionary_.push_back(std::make_tuple("Powierzchnia", ui->lineEdit_4->text(), region_));
		atribute_value_dictionary_.push_back(std::make_tuple("Zasolenie wod", ui->lineEdit->text(), region_));
		atribute_value_dictionary_.push_back(std::make_tuple("Gestosc owocow morza", ui->lineEdit_3->text(), region_));
		break;
	case 2:
		region_ = new Continent();
		break;
	case 3:
		region_ = new State();
		break;
	default:
		region_ = nullptr;
		break;
	}
	accept();
}

void SpecifiedObjectCreator::showEvent(QShowEvent* event)
{
	QWidget::showEvent(event);
	switch (selected_object_)
	{
	case 0:
		ui->groupBox_2->setVisible(false);
		break;
	case 1:
		ui->groupBox_2->setVisible(true);
	default:
		break;
	}
}