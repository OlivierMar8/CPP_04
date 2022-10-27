//Brain.cpp	CPP04	ex01

#include <iostream>
#include "Brain.hpp"

Brain::Brain( void ) {

	std::cout << "Brain Default Constructor called" << std::endl;
	return;
}

Brain::Brain( Brain const & src ) {

	std::cout << "Brain Copy Constructor called" << std::endl;
	*this = src;
	return;
}

Brain::~Brain( void ) {

		std::cout << "Brain Destructor called" << std::endl;
		return;
}

std::string *	Brain::getIdeas( void ) {

		return this->_ideas;
}
/*
void	setIdeas( std::string * ideas ) {

		_ideas = ideas;
}
*/
Brain &	Brain::operator=( Brain const & rhs) {

		std::cout << "Brain Assignement operator called" << std::endl;
		if (this == &rhs)
			return (*this);
		for (int i = 0; i < 100;  i++ ) {
			_ideas[i] = rhs._ideas[i];
		}
		return *this;
}

