#include "region.h"

Region::Region(double area, Climate* climate, std::string id) :
	area_(area), climate_(climate), id_(id)
{
	if (climate_ == nullptr)
		climate_ = new Climate();

	difficulties_points_.insert(std::pair<Point, double>(Point(1, 1), 23.5));

	AddResource(new Resource());
}

std::ostream& operator<<(std::ostream& os, const Region& region)
{
	os << "REGION=START" << std::endl;
	os << region.area_ << std::endl;
	os << *(region.climate_) << std::endl;
	region.SaveMapToStream(region.difficulties_points_, os);
	region.SaveVectorToStream(region.resources_, os);
	os << region.id_ << std::endl;

	return os;
}

std::istream& operator>>(std::istream& is, Region& region)
{
	is >> region.area_;
	is >> (*region.climate_);
	region.ReadMapFromStream(region.difficulties_points_, is);
	region.ReadVectorFromStream(region.resources_, is);
	is >> region.id_;

	return is;
}

void Region::SaveToFile(std::string file_name) const
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

void Region::ReadFromFile(std::string file_name)
{
	std::ifstream file_handler(file_name, std::ios_base::in | std::ios_base::app);

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