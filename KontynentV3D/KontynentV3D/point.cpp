#include "point.h"

std::ostream& operator<<(std::ostream& os, const Point& point)
{
	os << point.get_x_coord() << "," << point.get_y_coord() << "," << point.get_z_coord();
	return os;
}

std::istream& operator>>(std::istream& is, Point& point)
{
	std::string buffer;

	is >> buffer;
	
	std::vector<int> coords;
	point.split(buffer, ",", coords);

	if (coords.size() != 3)
	{
		std::string alert = "Uncorrect number of coordinates found.";
		throw alert;
	}

	point.set_x_y_z_coords(coords[0], coords[1], coords[2]);

	return is;
}

bool Point::operator<(const Point& point) const
{
	return (get_x_coord() < point.get_x_coord() && get_y_coord() < point.get_y_coord() && get_z_coord() < point.get_z_coord());
}

void Point::split(std::string phrase, std::string delimiter, std::vector<int>& vector)
{
	size_t pos = 0;
	std::string token;

	while ((pos = phrase.find(delimiter)) != std::string::npos) {
		token = phrase.substr(0, pos);
		vector.push_back(std::stoi(token));
		phrase.erase(0, pos + delimiter.length());
	}
}