#include "resource.h"

std::ostream& operator<<(std::ostream& os, const Resource& resource)
{
	os << resource.location_ << std::endl;
	os << resource.value_;
	return os;
}

std::istream& operator>>(std::istream& is, Resource& resource)
{
	is >> resource.location_;
	is >> resource.value_;
	return is;
}