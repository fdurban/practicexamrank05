#include "bigint.hpp"


bigint::bigint()
{
	this->str = "0";
}

bigint::bigint(int num)
{
	std::stringstream ss;
	ss<<num;
	this->str = ss.str();
}

std::ostream&	operator<<(std::ostream& os, const bigint& obj)
{
	os << obj.getStr();
	return os;
}

std::string     bigint::getStr() const
{
	return (this->str);
}
