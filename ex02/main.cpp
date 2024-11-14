#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"


int main(void) {

	const Animal* i = new Cat();
	const Animal* j = new Dog();
	// const Animal* k = new Animal();

	i->makeSound();

	delete j;
	delete i;
	// delete k;

	return 0;
}