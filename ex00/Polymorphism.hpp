#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
		std::string _sound;
	
	public:
		std::string getType() const;
		void setType(std::string);
		void makeSound() const;

		Animal();
		Animal(std::string type);
		Animal &operator=(const Animal &a);
		~Animal();

};

class Cat: virtual public Animal
{
	private:
	public:
		Cat ();
		Cat &operator=(const Cat &c);
		~Cat();

		std::string virtual getType() const;
		void makeSound() const;
};

class Dog: virtual public Animal
{
	private:
	public:
		Dog ();
		Dog &operator=(const Dog &d);
		~Dog();

		std::string virtual getType() const;
		void makeSound() const;
};

#endif
