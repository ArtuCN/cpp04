#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
		std::string _sound;
	
	public:
		std::string getType() const;
		void setType(std::string);

		Animal();
		Animal(std::string type);
		Animal(const Animal &a);
		Animal &operator=(const Animal &a);
		virtual ~Animal();

		virtual void makeSound() const;
};

class WrongAnimal
{
	protected:
		std::string _type;
		std::string _sound;
	
	public:
		std::string getType() const;
		void setType(std::string);

		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &wa);
		WrongAnimal &operator=(const WrongAnimal &wa);
		virtual ~WrongAnimal();

		void makeSound() const;
};

#endif