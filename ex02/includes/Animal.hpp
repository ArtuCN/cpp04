#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
		std::string _sound;
	
	public:
		Animal();
		Animal(std::string type);

		std::string getType() const;
		Animal &operator=(const Animal &a);
		virtual ~Animal();

		virtual void makeSound() const = 0;
};

#endif