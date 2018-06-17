#ifndef SPECIFIEDOBJECTCREATOR_H
#define SPECIFIEDOBJECTCREATOR_H

#include "region.h"
#include "continent.h"
#include "ocean.h"
#include "state.h"
#include <QDialog>
#include <tuple>

namespace Ui {
class SpecifiedObjectCreator;
}

class SpecifiedObjectCreator : public QDialog
{
	Q_OBJECT

public:
	explicit SpecifiedObjectCreator(QWidget *parent = 0);
	~SpecifiedObjectCreator();

	Region* get_region() const { return region_; }
	std::vector<std::tuple<std::string, QString, Region*>>& get_atribute_value_dictionary() { return atribute_value_dictionary_; };
	void set_selected_object(int index) { selected_object_ = index; }
	int get_selected_object() { return selected_object_; }
	size_t get_dictionary_size_change() { return dictionary_size_change_; }
	std::vector<std::tuple<std::string, QString, Region*>>::iterator it_;
private:
    Ui::SpecifiedObjectCreator *ui;
	int selected_object_;
	Region* region_;
	std::vector<std::tuple<std::string, QString, Region*>> atribute_value_dictionary_;
	size_t dictionary_size_change_;
public slots:
	void Cancel();
	void Add();
	void showEvent(QShowEvent* event);
};

#endif // SPECIFIEDOBJECTCREATOR_H
