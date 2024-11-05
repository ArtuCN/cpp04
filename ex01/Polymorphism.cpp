#include "Polymorphism.hpp"

Animal::Animal() : _type("Animal") {
}

Animal::Animal(std::string type) : _type(type) {}

Animal &Animal::operator=(const Animal &a) {
	if (this != &a) {
		_type = a._type;
		_sound = a._sound;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destroyed." << std::endl;
}

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
	_brain = new(brain);
}

Cat &Cat::operator=(const Cat &c) {
	if (this != &c) {
		Animal::operator=(c);
		delete _brain;
		_brain = new brain(*c._brain);
	}
	return *this;
}

Cat::~Cat() {
	delete _brain;
}

void Cat::makeSound() const {
	std::cout << _sound << std::endl;
}


Dog::Dog() : Animal("Dog") {
	_brain = new(brain);
	_sound = "Woof";
}

Dog &Dog::operator=(const Dog &d) {
	if (this != &d) {
		Animal::operator=(d);
		delete _brain;
		_brain = new brain(*d._brain);
	}
	return *this;
}

Dog::~Dog() {
	delete _brain;
}

void Dog::makeSound() const {
	std::cout << _sound << std::endl;
}
