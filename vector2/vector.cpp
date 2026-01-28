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

vect2::~vect2(){};

vect2::vect2(const vect2& other)
{
	*this = other;
}

vect2&	vect2::operator=(const vect2& other)
{
	if(this == &other)
		return *this;
	this->x = other.x;
	this->y = other.y;
	return *this; 
}

int	vect2::operator[](int num) const
{
	if(num == 0)
		return this->x;
	return y;
}

int&	vect2::operator[](int num)
{
	if(num == 0)
		return this->x;
	return y;
}

vect2	vect2::operator++(int)
{
	vect2	temp = *this;
	
	temp.x += 1;
	temp.y += 1;
	return temp;
}

vect2&	vect2::operator++()
{
	this->x += 1;
	this->y += 1;

	return (*this);
}

vect2	vect2::operator--(int)
{
	vect2	temp = *this;
	
	temp.x -= 1;
	temp.y -= 1;
	return temp;
}

vect2&	vect2::operator--()
{
	this->x -= 1;
	this->y -= 1;

	return (*this);
}

vect2&	vect2::operator+=(const vect2& other)
{
	this->x += other.x;
	this->y += other.y;

	return *this;
}

vect2&	vect2::operator-=(const vect2& other)
{
	this->x -= other.x;
	this->y -= other.y;

	return *this;
}

vect2&	vect2::operator*=(const vect2& other)
{
	this->x *= other.x;
	this->y *= other.y;

	return *this;
}


vect2&	vect2::operator*=(int num)
{
	this->x *= num;
	this->y *= num;

	return *this;
}

vect2	vect2::operator+(const vect2& other) const
{
	vect2	temp = *this;

	temp.x += other.x;
	temp.y += other.y;

	return temp; 
}

vect2	vect2::operator-(const vect2& other) const
{
	vect2	temp = *this;

	temp.x -= other.x;
	temp.y -= other.y;

	return temp; 
}

vect2	vect2::operator*(int num) const
{
	vect2	temp = *this;

	temp.x *= num;
	temp.y *= num;

	return temp; 
}

vect2	vect2::operator-() const
{
	vect2 temp = *this;
	temp[0] = -temp[0];
	temp[1] = -temp[1];

	return temp;
}

bool	vect2::operator==(const vect2& other) const
{
	if (this->x == other.x && this->y == other.y)
		return true;
	return false;
}

bool	vect2::operator!=(const vect2& other) const
{
	return !(*this == other);
}

vect2	operator*(int num, const vect2& other)
{
	vect2	temp(other);

	temp *= num;

	return temp;
	
}

std::ostream&	operator<<(std::ostream& os, const vect2& other)
{
	std::cout << "{" << other[0] << ", " << other[1] << "}" << std::endl;
	return os;
}
