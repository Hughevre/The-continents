#include "climate.h"

std::ostream& operator<<(std::ostream& os, const Climate& climate)
{
	os << climate.get_average_yearly_temp() << std::endl;
	os << climate.get_temp_amplitude() << std::endl;
	os << climate.get_precipitation();
	return os;
}

std::istream& operator>>(std::istream& is, Climate& climate)
{
	is >> climate.average_yearly_temp_;
	is >> climate.temp_amplitude_;
	is >> climate.precipitation_;
	return is;
}