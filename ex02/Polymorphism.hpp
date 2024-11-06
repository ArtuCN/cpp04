#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

#include <iostream>
#include "brain.hpp"

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

class Cat: virtual public Animal
{
	private:
		brain *_brain;
	public:
		Cat ();
		Cat &operator=(const Cat &c);
		~Cat();

		void makeSound() const;
};



class Dog: virtual public Animal
{
	private:
		brain *_brain;
	public:
		Dog ();
		Dog &operator=(const Dog &d);
		~Dog();

		void makeSound() const;
};

#endif
