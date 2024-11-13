#include "includes/Animal.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"

int main(void) {

	const Animal* meta = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();
	const WrongAnimal* wCat = new WrongAnimal();
	const WrongAnimal* wDog = new WrongCat();

	std::cout << cat->getType() << " " <<std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << wCat->getType() << " " << std::endl;
	std::cout << wDog->getType() << " " << std::endl;

	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	wCat->makeSound();
	wDog->makeSound();

	delete wDog;
	delete wCat;
	delete dog;
	delete cat;
	delete meta;


	return 0;
}