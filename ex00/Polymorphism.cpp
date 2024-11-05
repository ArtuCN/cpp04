#include "Polymorphism.hpp"

Animal::Animal() : _type("Animal") {}

Animal::Animal(std::string type) : _type(type) {}

Animal &Animal::operator=(const Animal &a) {
	if (this != &a) {
		_type = a._type;
		_sound = a._sound;
	}
	return *this;
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

Cat::Cat() : Animal("Cat") {
	_sound = "Meow";
}

Cat &Cat::operator=(const Cat &c) {
	if (this != &c) {
		Animal::operator=(c);
	}
	return *this;
}

Cat::~Cat() {}

void Cat::makeSound() const {
	std::cout << _sound << std::endl;
}


Dog::Dog() : Animal("Dog") {
	_sound = "Woof";
}

Dog &Dog::operator=(const Dog &d) {
	if (this != &d) {
		Animal::operator=(d);
	}
	return *this;
}

Dog::~Dog() {}

void Dog::makeSound() const {
	std::cout << _sound << std::endl;
}
