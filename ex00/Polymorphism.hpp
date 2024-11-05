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

		Animal();
		Animal(std::string type);
		Animal &operator=(const Animal &a);
		~Animal();

		virtual void makeSound() const;
};

class Cat: virtual public Animal
{
	private:
	public:
		Cat ();
		Cat &operator=(const Cat &c);
		~Cat();

		void makeSound() const;
};



class Dog: virtual public Animal
{
	private:
	public:
		Dog ();
		Dog &operator=(const Dog &d);
		~Dog();

		void makeSound() const;
};

#endif
