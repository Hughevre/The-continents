#include "ocean.h"

double Ocean::ComputeCharacteristicFunction() const
{
	double lambda;

	lambda = std::log10(0.5 * area_ + 0.2 * level_of_water_saltine_ + 0.3 * 1 / average_density_of_sea_fruits_);

	return lambda;
}

std::ostream& operator<<(std::ostream& os, const Ocean& ocean)
{
	os << "OCEAN=START" << std::endl;
	os << ocean.get_level_of_water_saltine() << std::endl;
	os << ocean.get_average_density_of_sea_fruits() << std::endl;
	return os;
}

std::istream& operator>>(std::istream& is, Ocean& ocean)
{
	is >> ocean.level_of_water_saltine_;
	is >> ocean.average_density_of_sea_fruits_;
	return is;
}

void Ocean::ReadFromFile(std::string file_name)
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

void Ocean::SaveToFile(std::string file_name) const
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

