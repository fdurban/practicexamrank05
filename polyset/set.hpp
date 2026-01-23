#include "searchable_bag.hpp"


class set
{
	private:
		searchable_bag&	bag;
		set();
		set(const set& source);
		set& operator=(const set& other);
	public:
		set(searchable_bag& bag);
		bool	has(int) const;
		void	insert (int);
		void	insert(int *, int);
		void	print() const;
		void	clear();
		const	searchable_bag& get_bag();
		~set();
};
