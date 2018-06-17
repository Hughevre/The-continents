#include "continent.h"

Continent* Continent::DivideContinent(double population, int number_of_tectonic_plates)
{
	Continent* new_continent = new Continent(population, number_of_tectonic_plates);
	population_ -= population;
	number_of_tectonic_plates_ -= number_of_tectonic_plates;
	return new_continent;
}

void Continent::SimulateConstantTides(double average_level_of_outside_waters)
{
	average_level_of_outside_waters_ = average_level_of_outside_waters;

	auto average_height = [&]() -> int
	{
		int sum;
		for (auto const&[key, value] : difficulties_points_)
		{
			sum += key.get_z_coord();
		}

		return sum / difficulties_points_.size();
	}();

	area_ -= ((average_level_of_outside_waters_ / average_height) * area_);
}

double Continent::ComputeCharacteristicFunction() const
{
	double lambda;

	lambda = std::log10(number_of_tectonic_plates_ +
		2 * area_ +
		0.7 * climate_->get_average_yearly_temp() +
		0.3 * climate_->get_temp_amplitude());

	return lambda;
}

std::ostream& operator<<(std::ostream& os, const Continent& continent)
{
	os << "CONTINENT=START" << std::endl;
	os << continent.get_population() << std::endl;
	os << *(continent.surrounding_ocean_);
	os << continent.get_number_of_tectonic_plates() << std::endl;
	os << continent.get_average_level_of_outside_waters_() << std::endl;
	return os;
}

std::istream& operator>>(std::istream& is, Continent& continent)
{
	is >> continent.population_;
	is >> *(continent.surrounding_ocean_);
	is >> continent.number_of_tectonic_plates_;
	is >> continent.average_level_of_outside_waters_;
	return is;
}

void Continent::ReadFromFile(std::string file_name)
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

void Continent::SaveToFile(std::string file_name) const
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
