#include "../includes/Animal.hpp"

A_Animal::A_Animal() : _type("Animal") {
}

A_Animal::A_Animal(std::string type) : _type(type) {}

A_Animal &A_Animal::operator=(const A_Animal &a) {
	if (this != &a) {
		_type = a._type;
		_sound = a._sound;
	}
	return *this;
}

A_Animal::~A_Animal() {
	std::cout << "Animal destroyed." << std::endl;
}

std::string A_Animal::getType() const {
	return _type;
}

void A_Animal::makeSound() const {
	std::cout << _sound << std::endl;
}