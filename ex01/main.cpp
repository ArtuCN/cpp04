#include "Polymorphism.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete i;
	delete j;

	return 0;
}