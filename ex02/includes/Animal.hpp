#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
		std::string _sound;
		Animal();
		Animal(std::string type);
	
	public:
		std::string getType() const;
		Animal &operator=(const Animal &a);
		virtual ~Animal();

		virtual void makeSound() const;
};

#endif