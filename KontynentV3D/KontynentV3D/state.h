#pragma once

#include "continent.h"
#include <string>
#include <iostream>
#include <math.h>

class State : public Continent
{
public:
	State(std::string regime = "Demokracja", int number_of_friendly_organisations = 1, bool is_nuclear_plant = true, int GDP = 45987) :
		regime_(regime),
		number_of_friendly_organisations_(number_of_friendly_organisations),
		is_nuclear_plant_(is_nuclear_plant),
		GDP_(GDP)
	{}
	~State() = default;

	double ComputeCharacteristicFunction() const;

	void set_regime(std::string regime) { regime_ = regime; }
	void set_number_of_friendly_orgnisations(int number_of_hostile_organisations) { number_of_friendly_organisations_ = number_of_hostile_organisations; }
	void set_is_nuclear_plant(bool is_nuclear_plant) { is_nuclear_plant_ = is_nuclear_plant; }
	void set_gdp(int GDP) { GDP_ = GDP; }

	friend std::ostream& operator<<(std::ostream& os, const State& state);
	friend std::istream& operator>>(std::istream& is, State& state);

	//Reads class instance from file
	virtual void ReadFromFile(std::string file_name);

	//Saves class instance to file
	virtual void SaveToFile(std::string file_name) const;
private:
	std::string regime_;							
	int number_of_friendly_organisations_;		
	bool is_nuclear_plant_;				
	int GDP_;

	void NuclearPlantExplosion();
};