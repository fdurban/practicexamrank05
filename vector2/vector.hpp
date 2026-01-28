#include <iostream>


class vect2
{
	private:
		int x;
		int y;
	public:
		vect2();
		vect2(int x, int y);
		~vect2();
		vect2(const vect2& other);
		vect2&	operator=(const vect2& other);
		int	operator[](int num) const;
		int&	operator[](int num);
		vect2	operator++(int);
		vect2&	operator++();
		vect2	operator--(int);
		vect2&	operator--();
		vect2&	operator+=(const vect2& other);
		vect2&	operator-=(const vect2& other);
		vect2&	operator*=(const vect2& other);
		vect2&	operator*=(int  num);
		vect2	operator+(const vect2& other) const;
		vect2	operator-(const vect2& other) const;
		vect2	operator*(int num) const;
		vect2	operator-() const;
		bool	operator==(const vect2& other) const;
		bool	operator!=(const vect2& other) const;
};
vect2	operator*(int num, const vect2& other);

std::ostream&	operator<<(std::ostream& os, const vect2& other);
