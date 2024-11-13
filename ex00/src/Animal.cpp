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
	std::cout << "Animal sound" << std::endl;
}

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wa) {
	if (this != &wa) {
		_type = wa._type;
		_sound = wa._sound;
	}
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wa){
	*this = wa;
}

WrongAnimal::~WrongAnimal() {}

std::string WrongAnimal::getType() const {
	return _type;
}

void WrongAnimal::setType(const std::string type) {
	_type = type;
}

void WrongAnimal::makeSound() const {
	std::cout << "strange sound" << std::endl;
}