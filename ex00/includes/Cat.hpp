#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat ();
		Cat(const Cat &c);
		Cat &operator=(const Cat &c);
		~Cat();

		void makeSound() const;
};

class WrongCat : public WrongAnimal {

	public:
		WrongCat(void);
		WrongCat(const WrongCat& cat);

		WrongCat& operator=(const WrongCat& cat);

		void makeSound() const;

		~WrongCat(void);
};


#endif