#include "brain.hpp"

brain::brain()
{
	std::cout<<"Brain default constructor called\n";
}

brain::brain(const brain &b)
{
	std::cout<<"Brain copy constructor called\n";
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = b.ideas[i];
	}
}

brain& brain::operator=(const brain &b)
{
	std::cout<<"Brain assignation operator called\n";
	if (this != &b)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = b.ideas[i];
		}
	}
	return *this;
}

brain::~brain()
{
	std::cout<<"Brain destructor called\n";
}

std::string brain::getIdea(int i)
{
	return this->ideas[i];
}

void brain::setIdea(int i, std::string idea)
{
	this->ideas[i] = idea;
}