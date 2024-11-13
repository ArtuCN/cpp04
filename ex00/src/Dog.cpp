#include "../includes/Dog.hpp"
#include "../includes/Animal.hpp"

Dog::Dog() : Animal("Dog") {
	_sound = "Woof";
}

Dog::Dog(const Dog &d) : Animal(d) {
	*this = d;
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

WrongDog::WrongDog() : WrongAnimal("WrongDog") {
	_sound = "Wrong Woof";
}

WrongDog::WrongDog(const WrongDog &wd) : WrongAnimal(wd) {
	*this = wd;
}

WrongDog &WrongDog::operator=(const WrongDog &wd) {
	if (this != &wd) {
		WrongAnimal::operator=(wd);
	}
	return *this;
}

WrongDog::~WrongDog() {}

void WrongDog::makeSound() const {
	std::cout << "bau bau" << std::endl;
}