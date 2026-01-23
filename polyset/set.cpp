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
		bag.insert(value);
}

void	set::insert(int *values, int amount)
{
	for(int i = 0; i < amount; i++)
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

const	searchable_bag& set::get_bag()
{
	return (this->bag);
}

set::~set(){};
