#pragma once

#include "region.h"
#include "ocean.h"
#include <math.h>

class Continent : public Region
{
public:
	Continent(double population = 546.4, int number_of_tectonic_plates = 3) :
		population_(population),
		number_of_tectonic_plates_(number_of_tectonic_plates),
		average_level_of_outside_waters_(0)
	{
		surrounding_ocean_ = new Ocean();
	}

	~Continent()
	{
		delete surrounding_ocean_;
	}

	//Divides continent into two smaller ones with following parameters each
	Continent* DivideContinent(double population, int number_of_tectonic_plates);

	//Simulates an effect of waters level rise
	void SimulateConstantTides(double average_level_of_outside_waters);

	double ComputeCharacteristicFunction() const;

	double get_population() const { return population_; }
	Ocean* get_surrounding_ocean() const { return surrounding_ocean_; }
	int get_number_of_tectonic_plates() const { return number_of_tectonic_plates_; }
	double get_average_level_of_outside_waters_() const { return average_level_of_outside_waters_; }

	void set_population(double population) { population_ = population; }
	void set_number_of_tectonic_plates(int number_of_tectonic_plates) { number_of_tectonic_plates_ = number_of_tectonic_plates; }
	void set_average_level_of_outside_waters(double outside_waters_level) { average_level_of_outside_waters_ = outside_waters_level; }

	friend std::ostream& operator<<(std::ostream& os, const Continent& continent);
	friend std::istream& operator>>(std::istream& is, Continent& continent);

	//Reads class instance from file
	void ReadFromFile(std::string file_name);

	//Saves class instance to file
	void SaveToFile(std::string file_name) const;
protected:
	double population_;									
	Ocean* surrounding_ocean_;
private:
	int number_of_tectonic_plates_;					
	double average_level_of_outside_waters_;				
};