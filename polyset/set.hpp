#include "searchable_bag.hpp"

class set
{
	private:
		searchable_bag& bag;
		set();
		set(const set& other);
		set&	operator=(const set& other);
	public:
		set(searchable_bag& bag);
		bool	has(int) const;
		void	insert(int *, int);
		void	insert(int);
		void	print() const;
		searchable_bag&	get_bag() const;
		void	clear();
		~set();
};
