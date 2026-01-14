#include "vector2.hpp"

vector2::vector2()
{
	this->x = 0;
	this->y = 0;
	std::cout<<"vector2 standard constructor called"<<std::endl;
}

vector2::vector2(int num1, int num2)
{
	this->x = num1;
	this->y = num2;
	std::cout<<"Parametirized constructor called"<<std::endl;
}

vector2::vector2(const vector2& other)
{
	*this = other;
}

vector2::~vector2()
{
	std::cout<<"vector2 destructor called"<<std::endl;
}

vector2& vector2::operator=(const vector2 &other)
{
	if(this == &other)
		return *this;
	this->x = other.x;
	this->y = other.y;
	return(*this);
}

int& vector2::operator[](int i)
{
	if(i == 0)
		return (this->x);
	return (this->y);
}

int vector2::operator[](int i) const
{
	if(i == 0)
		return (this->x);
	return (this->y);
}

//+ & - operators
vector2 vector2::operator-() const
{
	vector2 temp = *this;
	temp[0] = -temp[0];
	temp[1] = -temp[1];
	return (temp);
}

//++ pre and post
vector2 &vector2::operator++()
{
	this->x += 1;
	this->y += 1;
	return (*this);
}
vector2 vector2::operator++(int)
{
	vector2 temp = *this;
	this->x += 1;
	this->y += 1;
	return (temp);
}
// -- pre and post
vector2 &vector2::operator--()
{
	this->x -= 1;
	this->y -= 1;
	return (*this);
}
vector2 vector2::operator--(int)
{
	vector2 temp = *this;
	this->x += 1;
	this->y += 1;
	return (temp);
}
//+= & -=

vector2 &vector2::operator+=(const vector2& other)
{
	this->x += other.x;
	this->y += other.y;
	return (*this);
}
vector2 &vector2::operator-=(const vector2& other)
{
	this->x -= other.x;
	this->y -= other.y;
	return (*this);
}


std::ostream& operator<<(std::ostream &ostream, const vector2 &v)
{
	std::cout<< "{" << v[0] << ", " << v[1] << "}"<<std::endl;
	return (ostream);
}


