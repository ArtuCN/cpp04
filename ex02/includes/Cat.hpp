#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		brain *_brain;
	public:
		Cat ();
		Cat(const Cat &c);
		Cat &operator=(const Cat &c);
		~Cat();

		void makeSound() const;
};

#endif