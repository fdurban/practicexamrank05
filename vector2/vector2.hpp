#include <iostream>


class vector2
{
	private:
		int x;
		int y;
	public:
		vector2();
		vector2(int x, int y);
		vector2(const vector2& other);
		vector2& operator=(const vector2 &other);
		int     operator[](int i) const;

};

std::ostream&   operator<<(std::ostream& os,const vector2& vector2);

