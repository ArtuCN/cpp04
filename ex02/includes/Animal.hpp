#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class A_Animal
{
	protected:
		std::string _type;
		std::string _sound;
	
	public:
		A_Animal();
		A_Animal(std::string type);

		std::string getType() const;
		A_Animal &operator=(const A_Animal &a);
		virtual ~A_Animal();

		virtual void makeSound() const = 0;
};

#endif