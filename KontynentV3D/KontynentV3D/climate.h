#pragma once

#include <iostream>

class Climate
{
public:
	Climate(double average_yearly_temp = 10.5, double temp_amplitude = 20.0, int precipitation = 567) :
		average_yearly_temp_(average_yearly_temp),
		temp_amplitude_(temp_amplitude),
		precipitation_(precipitation)
	{}

	double get_average_yearly_temp() const { return average_yearly_temp_; }
	double get_temp_amplitude() const { return temp_amplitude_; }
	int get_precipitation() const { return precipitation_; }

	void set_average_yearly_temp(double new_yearly_temp) { average_yearly_temp_ = new_yearly_temp; }
	void set_temp_amplitude(double temp_amplitude) { temp_amplitude_ = temp_amplitude; }
	void set_precipitation(int new_precipitation) { precipitation_ = new_precipitation; }

	friend std::ostream& operator<<(std::ostream& os, const Climate& climate);
	friend std::istream& operator>>(std::istream& is, Climate& climate);
protected:
	//In degs. C
	double average_yearly_temp_;

	//In degs. C
	double temp_amplitude_;

	//In mms
	int precipitation_;
};