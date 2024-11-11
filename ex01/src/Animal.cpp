#include "../includes/Animal.hpp"

Animal::Animal() : _type("Animal") {}

Animal::Animal(std::string type) : _type(type) {}

Animal &Animal::operator=(const Animal &a) {
	if (this != &a) {
		_type = a._type;
		_sound = a._sound;
	}
	return *this;
}

Animal::Animal(const Animal &a) {
	*this = a;
}

Animal::~Animal() {}

std::string Animal::getType() const {
	return _type;
}

void Animal::setType(const std::string type) {
	_type = type;
}

void Animal::makeSound() const {
	std::cout << _sound << std::endl;
}