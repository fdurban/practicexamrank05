#include <iostream>
#include <string>
#include <sstream>

class bigint
{
	private:
		std::string str;
	public:
		bigint();
		bigint(int num);
		std::string	getStr() const;

};

std::ostream&   operator<<(std::ostream& os, const bigint& obj);

