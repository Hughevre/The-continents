#pragma once

#include "point.h"
#include <iostream>

class Resource
{
public:
	Resource(Point location = Point(8, 9), double value = 456.78) :
		location_(location),
		value_(value)
	{}

	Point get_location() const { return location_; }
	double get_value() const { return value_; }

	void set_location(Point location) { location_ = std::move(location); }
	void set_value(double value) { value_ = value; }

	friend std::ostream& operator<<(std::ostream& os, const Resource& resource);
	friend std::istream& operator>>(std::istream& is, Resource& resource);
protected:
	Point location_;
	double value_;
};