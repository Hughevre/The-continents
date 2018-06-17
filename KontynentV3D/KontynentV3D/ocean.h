#pragma once

#include "region.h"
#include <iostream>
#include <math.h>
#include <string>

class Ocean : public Region
{
public:
	Ocean(std::string id = "Europe", double area = 456.7, double level_of_water_saltine = 100.0, double average_density_of_sea_fruits = 25.0) :
		Region(area,nullptr,id),
		level_of_water_saltine_(level_of_water_saltine),
		average_density_of_sea_fruits_(average_density_of_sea_fruits)
	{}
	~Ocean() = default;

	double ComputeCharacteristicFunction() const;

	double get_level_of_water_saltine() const { return level_of_water_saltine_; }
	double get_average_density_of_sea_fruits() const { return average_density_of_sea_fruits_; }

	void set_average_density_of_sea_fruits(double average_density_of_sea_fruits) { average_density_of_sea_fruits_ = average_density_of_sea_fruits; };
	void set_level_of_water_saltine(double level_of_water_saltine) { level_of_water_saltine_ = level_of_water_saltine; }

	friend std::ostream& operator<<(std::ostream& os, const Ocean& ocean);
	friend std::istream& operator>>(std::istream& is, Ocean& ocean);

	//Reads class instance from file
	void ReadFromFile(std::string file_name);

	//Saves class instance to file
	void SaveToFile(std::string file_name) const;
private:
	double level_of_water_saltine_;			
	double average_density_of_sea_fruits_; 
};