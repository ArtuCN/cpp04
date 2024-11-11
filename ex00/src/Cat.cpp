#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"

Cat::Cat() : Animal("Cat") {
	_sound = "Meow";
}

Cat::Cat(const Cat &c) {
	*this = c;
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