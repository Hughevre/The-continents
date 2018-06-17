#include "state.h"

double State::ComputeCharacteristicFunction() const
{
	double lambda;
	lambda = std::log10(0.2 * area_ + 0.6 * GDP_ + 0.2 * population_);
	return lambda;
}

std::ostream& operator<<(std::ostream& os, const State& state)
{
	os << "STATE=STRART" << std::endl;
	os << state.regime_ << std::endl;
	os << state.number_of_friendly_organisations_ << std::endl;
	os << state.is_nuclear_plant_ << std::endl;
	os << state.GDP_ << std::endl;
	return os;
}

std::istream& operator>>(std::istream& is, State& state)
{
	is >> state.regime_;
	is >> state.number_of_friendly_organisations_;
	is >> state.is_nuclear_plant_;
	is >> state.GDP_;
	return is;
}

void State::ReadFromFile(std::string file_name)
{
	std::ifstream file_handler(file_name, std::ios_base::out | std::ios_base::app);

	if (!file_handler)
	{
		std::cout << "Problem with opening files occured" << std::endl;
	}
	else
	{
		file_handler >> *this;
	}

	file_handler.close();
}

void State::SaveToFile(std::string file_name) const
{
	std::ofstream file_handler(file_name, std::ios_base::out | std::ios_base::app);

	if (!file_handler)
	{
		std::cout << "Problem with opening files occured" << std::endl;
	}
	else
	{
		file_handler << *this;
	}

	file_handler.close();
}

void State::NuclearPlantExplosion()
{
	population_ *= 0.9;
	is_nuclear_plant_ = false;
	GDP_ *= 0.88;
}