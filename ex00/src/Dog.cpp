#include "../includes/Dog.hpp"
#include "../includes/Animal.hpp"

Dog::Dog() : Animal("Dog") {
	_sound = "Woof";
}

Dog::Dog(const Dog &d) {
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
