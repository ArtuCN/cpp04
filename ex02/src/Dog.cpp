#include "../includes/Dog.hpp"
#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"


Dog::Dog() : Animal("Dog") {
	_brain = new(brain);
	_sound = "Woof";
}

Dog::Dog(const Dog &d) {
	*this = d;
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
