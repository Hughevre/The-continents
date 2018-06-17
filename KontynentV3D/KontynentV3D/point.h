#pragma once

#include <iostream>
#include <string>
#include <vector>

class Point
{
public:
	Point(int x_coord, int y_coord, int z_coord) : 
		x_coord_(x_coord), 
		y_coord_(y_coord), 
		z_coord_(z_coord) 
	{}

	//Constructor designed for points in 2D space
	Point(int x_coord, int y_coord) : 
		x_coord_(x_coord), 
		y_coord_(y_coord), 
		z_coord_(0) 
	{}

	int get_x_coord() const { return x_coord_; }
	int get_y_coord() const { return y_coord_; }
	int get_z_coord() const { return z_coord_; }

	void set_x_coord(int x_coord) { x_coord_ = x_coord; }
	void set_y_coord(int y_coord) { y_coord_ = y_coord; }
	void set_z_coord(int z_coord) { z_coord_ = z_coord; }

	void set_x_y_coords(int x_coord, int y_coord) 
	{ 
		set_x_coord(x_coord); set_y_coord(y_coord); 
	}

	void set_x_y_z_coords(int x_coord, int y_coord, int z_coord) 
	{ 
		set_x_y_coords(x_coord, y_coord); set_z_coord(z_coord); 
	}

	friend std::ostream& operator<<(std::ostream& os, const Point& point);
	friend std::istream& operator>>(std::istream& is, Point& point);
	bool operator<(const Point& point) const;
private:
	int x_coord_;
	int y_coord_;
	int z_coord_;

	void split(std::string phrase, std::string delimiter, std::vector<int>& vector);
};