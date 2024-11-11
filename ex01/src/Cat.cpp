#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"


Cat::Cat() : Animal("Cat") {
	_sound = "Meow";
	_brain = new(brain);
}

Cat::Cat(const Cat &c) {
	*this = c;
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
