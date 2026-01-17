#include "vector2.hpp"

vector2::vector2()
{
	this->x = 0;
	this->y = 0;
	std::cout<<"Construvtor called"<<std::endl;
}
vector2::vector2(int x, int y)
{
	this->x = x;
	this->y = y;
	std::cout<<"Construvtor called"<<std::endl;
}


vector2::vector2(const vector2 &other)
{
	*this = other;
}

vector2& vector2::operator=(const vector2 &other)
{
	if(this == &other)
		return (*this);
	this->x = other.x;
	this->y = other.y;
	return (*this);
}
