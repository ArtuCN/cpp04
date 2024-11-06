#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>


class brain
{
	private:
		std::string ideas[100];
	public:
		std::string getIdea(int i);
		void setIdea(int i, std::string idea);

		brain();
		brain(const brain &b);
		brain& operator=(const brain &b);
		~brain();
};

#endif