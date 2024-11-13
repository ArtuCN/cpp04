#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"

Cat::Cat() : Animal("Cat") {
	_sound = "Meow";
}

Cat::Cat(const Cat &c) : Animal(c) {
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

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	_sound = "Wrong Meow";
}

WrongCat::WrongCat(const WrongCat &wc) : WrongAnimal(wc) {
	*this = wc;
}

WrongCat &WrongCat::operator=(const WrongCat &wc) {
	if (this != &wc) {
		WrongAnimal::operator=(wc);
	}
	return *this;
}

WrongCat::~WrongCat() {}

void WrongCat::makeSound(void) const {
	std::cout << "Miao Miao\n";
}
