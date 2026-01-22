

searchable_tree_bag::searchable_tree_bag()
{
}

searchable_tree_bag::searchable_tree_bag(const searchable_tree_bag& other): tree_bag(other)
{

}

searchable_tree_bag&	searchable_tree_bag::operator=(const searchable_tree_bag& other)
{
	if(this == &other)
		return (*this);
	array_tree::operator=(other);
	return *this;
}

bool	searchable_tree_bag::search(node *node, const int value) const
{
	if(node == nullptr)
		return false;
	if (node->value == value)
		return true;
	else if(node->value > value)
		return (search(node->l, value));
	else
		return (search(node->r, value));
}

bool	searchable_tree_bag::has(int value) const
{
	return (search(this->tree, value));
}

searchable_tree_bag::~searchable_tree_bag()
{

}
