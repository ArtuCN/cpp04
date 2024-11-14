#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout<<std::endl;
	delete i;
	delete j;
	std::cout<<"\nDog tmp = basic test\n";
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout<<"\nOut of tmp-block\n";
	return 0;
}