#include "set.hpp"

set::set(searchable_bag& bag): bag(bag)
{}

bool	set::has(int value) const
{
	return (this->bag.has(value));
}

void	set::insert(int value)
{
	if(!(this->has(value)))
		this->bag.insert(value);
}

void	set::insert(int *values, int size)
{
	for(int i = 0; i < size; i++)
	{
		this->insert(values[i]);
	}
}

void	set::print() const
{
	this->bag.print();
}

void	set::clear()
{
	this->bag.clear();
}

searchable_bag&	set::get_bag() const
{
	return this->bag;
}

set::~set()
{}
