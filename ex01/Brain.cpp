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

int		Brain::getFoo( void) const {

		return this->_foo;
}

Brain &	Brain::operator=( Brain const & rhs) {

		std::cout << "Brain Assignement operator called" << std::endl;

		if ( this != &rhs )
			this->_foo = rhs.getFoo();
		return *this;
}

