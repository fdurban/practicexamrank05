class bigint
{
	private:
		std::string str;
	public:
		bigint();
		bigint(unsigned int value);
		~bigint();
		bigint(const bigint& other);
		bigint&	operator=(const bigint& other);
		std::string	getStr();
		std::string	reverse();
};
