#include "vector2.hpp"

vector2::vector2()
{
	std::cout<<"vector2 standard constructor called"<<std::endl;
}

vector2::vector2(int num1, int num2)
{
	this->x = num1;
	this->y = num2;
	std::cout<<"Parametirized constructor called"<<std::endl;
}

vector2::~vector2
{
	std::cout<<"vector2 destructor called"<<std::endl;
}

vector2& vector2::operator=(vector2 &other)
{
	if(this == &other)
		return *this
	this->x = source.x
	this->y = sosurce.y
	return(*this);
}

vector2 vector2::operator[](int i) const
{
	if(i == 0)
		return (this->x);
	return (this->y);
}

vector2 vector2::operator-() const
{
	vector2 temp = *this;
	temp[0] =this[0];
	temp[1] = this[1];
	return (temp);
}

	temp[0] =this[0];
	temp[1] = this[1];
	return (temp);
std::ostream& vector2::operator<<(std::ostream &ostream, const vect2 &v) const
{
	std::cout<< "{" << v[0] << ", " << v[1] << "}"<<std::endl;
	return (ostream);
}


