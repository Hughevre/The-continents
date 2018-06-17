#pragma once

#include "climate.h"
#include "point.h"
#include "resource.h"
#include <map>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <iostream>

class Region
{
public:
	Region(double area = 10.2, Climate* climate = nullptr, std::string id = "Europe");
	virtual ~Region() { delete climate_; }

	std::string get_id() const { return id_; }

	void ResizeArea(double area) { area_ = area; }

	void AddResource(Resource* resource) { resources_.push_back(resource); }
	void DeleteResource(Resource* resource) 
	{ 
		resources_.erase(std::remove(resources_.begin(), resources_.end(), resource), resources_.end()); 
	}

	virtual double ComputeCharacteristicFunction() const { double lambda = area_ / 2; return lambda; }

	friend std::ostream& operator<<(std::ostream& os, const Region& region);
	friend std::istream& operator>>(std::istream& is, Region& region);

	//Reads class instance from file
	virtual void ReadFromFile(std::string file_name);

	//Saves class instance to file
	virtual void SaveToFile(std::string file_name) const;
protected:
	double area_;
	Climate* climate_;
	std::map<Point, double> difficulties_points_; 
	std::vector<Resource*> resources_;
	std::string id_;

	template<class T, class U>
	void SaveMapToStream(const std::map<T,U>& map, std::ostream& os) const;

	template<class T>
	void SaveVectorToStream(const std::vector<T>& vector, std::ostream& os) const;

	template<class T, class U>
	void ReadMapFromStream(std::map<T,U>& map, std::istream& is);

	template<class T>
	void ReadVectorFromStream(std::vector<T>& vector, std::istream& is);
};

template<class T, class U>
void Region::SaveMapToStream(const std::map<T, U>& map, std::ostream& os) const
{
	for (const auto& pair : map)
	{
		os << pair.first << "|" << pair.second << std::endl;
	}
	os << "MAP=STOP" << std::endl;
}

template<>
inline void Region::SaveVectorToStream<Resource*>(const std::vector<Resource*>& vector, std::ostream& os) const
{
	for (const auto& element : vector)
	{
		os << (*element) << std::endl;
	}
	os << "VECTOR=STOP" << std::endl;
}

template<class T, class U>
void Region::ReadMapFromStream(std::map<T, U>& map, std::istream& is)
{

}

template<class T>
void Region::ReadVectorFromStream(std::vector<T>& vector, std::istream& is)
{
	//Coords /n Value
	std::string buffer;
	std::vector<std::string> tokens;
	//Point temporary_point;
	int lines_to_read = 0;

	//is.seekg(-1,std::ios_base::cur);
	is >> buffer;
	do 
	{
		is >> buffer;
		++lines_to_read;
	} while (buffer != "VECTOR=STOP");
}