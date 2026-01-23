#include "vector.hpp"

vect2::vect2()
{
	this->x = 0;
	this->y = 0;
}

vect2::vect2(int x, int y)
{
	this->x = x;
	this->y = y;
}

vect2::~vect2()
{}

vect2&	vect2::operator=(const vect2& other)
{
	if(this == &other)
		return *this;
	this->x = other.x;
	this->y = other.y;
	return (*this);
}

vect2::vect2(const vect2& other)
{
	*this = other;
}

int	vect2::operator[](int i) const
{
	if (i == 0)
		return this->x;
	return this->y;
}

std::ostream&	operator<<(std::ostream& os, const vect2& v1)
{
	std::cout << "v1: " << "{" << v1[0] << ", " << v1[1] << "}" << std::endl;
	return os;
}
