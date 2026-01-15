#ifndef VECTOR2_HPP
#define VECTOR2_HPP

#include <iostream>

class vector2
{

	private:
		int x;
		int y;
	public:
		vector2();
		vector2(int x, int y);
		vector2(const vector2 &other);
		~vector2();
		vector2& operator=(const vector2 &other);
		int& operator[](int i) ;
		int operator[](int i) const;
		vector2 operator-() const;
		vector2 operator+() const;
		vector2 operator+(const vector2 &other) const;
		vector2 operator-(const vector2 &other) const;
		vector2 &operator++();
		vector2 operator++(int);
		vector2 &operator--();
		vector2 operator--(int);
		vector2 &operator+=(const vector2& other);
		vector2 &operator-=(const vector2& other);
		vector2 &operator*=(const vector2 &other);
		vector2 operator*(int number) const;
		vector2& operator*=(int number);
};
		std::ostream& operator<<(std::ostream &ostream, const vector2 &v);
#endif
