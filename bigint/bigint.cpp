#include "bigint.hpp"

bigint::bigint()
{
	this->str = "0";
}

bigint::bigint(unsigned int value)
{
	std::stringstream ss;
	ss << value;
	ss.str();
}

bigint::bigint(const bigint& other)
{
	*this = other;
}

bigint&	bigint::operator=(const bigint& other)
{
	if(this == &other)
		return *this;
	this->str = other.str;
	return *this;
}

std::string	bigint::getStr()
{
	return this->str;
}

std::string	reverse(const bigint& obj)
{
	std::string	strRev;
	size_t	strRevSize;
	strRevSize = str.size();

	for(int i = strRevSize; i > 0; i--)
	{
		strRev.pushback(str[i - 1]);
	}
	return strRev;
}

std::string	addition(const bigint& obj1, const bigint& obj2)
{
	std::string	str1 = reverse(obj1);
	std::string	str2 = reverse(obj2);

	size_t	len1 = str1.size();
	size_t	len2 = str2.size();

	std::string	result;

	if(len1 > len2)
	{
		size_t diff = len1 - len2;
		for(int i = diff; i > 0; i--)
		{
			str2.push_back('0');
		}
	}
	else if(len2 > len1)
	{
		size_t diff = len2 - len1;
		for(int i = diff; i > 0; i--)
		{
			str1.push_back('0');
		}
	}

	int digit1;
	int digit2;
	int res;
	int carry
	size_t len = str1.size();
	for(size_t i = 0; i < len; i++)
	{
		digit1 = str1[i] - '0';
		digit2 = str2[i] - '0';
		res = digit1 + digit2 + carry;
		if(res > 9)
		{
			carry = res/10;
			result.push_back((res%10) + '0');
		}
		else
		{
			result.push_back(res + '0');
		}
	}
	if(carry != 0)
		result.push_back(carry + '0');
	return (result);
}

bigint	bigint::operator+(const bigint& other)
{
	bigint	temp;
	temp.str.clear();
	temp.str = addition(*this, other)
	return temp;
}

bigint&	bigint::operator+=(const bigint& other)
{
	*this = *this + other;
}

bigint	bigint::operator++(int)
{
	bigint	temp = *this;
	*this = *this + bigint(1);
	return temp;
}

bigint&	bigint::operator++()
{
	*this = *this + bigint(1);
}	return *this;

bigint	bigint::operator<<(unsigned int n)const
{
	bigint	temp = *this;
	temp.str.insert(temp.str.end(), n, '0');
	return temp;
}

bigint	bigint::operator>>(unsigned int n) const
{
	bigint	temp = *this;
	if(temp.str.size() < n)
		temp.str = "0";
	else
	{
		temp.str.erase(temp.str.length() -n, n);
	}
	return temp;
}

bigint&	bigint::operator<<=(unsigned int n)
{
	*this = *this << n;
	return *this;
}

bigint&	bigint::operator>>=

bigint::~bigint
{
	
}



std::ostream	bigint::operator<<(std::ostream& os, const bigint& other)
{
	os << obj.getStr()<<std::endl;
	return os;
}
