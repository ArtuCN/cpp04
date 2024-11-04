#include "Polymorphism.hpp"

std::string Animal::getType() const
{
	return this->_type;
}

void Animal::setType(std::string type)
{
	_type = type;
}

Animal::Animal()
{
	this->_type = "Beast";
	std::cout<<"Default constructor called\n";
}

Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout<<"Constructor called\n";
}

Animal& Animal::operator=(const Animal &a)
{
	if (this!= &a)
	{
		this->_type = a._type;
		this->_sound = a._sound;
	}
	return *this;
}

Animal:: ~Animal()
{
	std::cout<<"Destructor called\n";
}

void Animal::makeSound() const
{
	std::cout<<this->_sound<<std::endl;
}

Cat::Cat(): Animal("cat") {
	Animal::_sound = "Meow";
}

Cat& Cat::operator=(const Cat &c)
{
	if (this!= &c)
	{
		this->_type = c._type;
		this->_sound = c._sound;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout<< "Cat Destructor called\n";
}

Dog::Dog(): Animal("dog") {
	Animal::_sound = "Bau";
}

Dog& Dog::operator=(const Dog &d)
{
	if (this!= &d)
	{
		this->_type = d._type;
		this->_sound = d._sound;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout<< "Dog Destructor called\n";
}


void Cat::makeSound() const {
	std::cout << _sound << std::endl;
}

void Dog::makeSound() const {
	std::cout << _sound << std::endl;
}

std::string Cat::getType() const {
	return _type;
}

std::string Dog::getType() const {
	return _type;
}