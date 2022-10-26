//Dog.cpp    CPP04    ex00

#include <iostream>
#include "Dog.hpp"

Dog::Dog( void ) {

	std::cout << "Dog Default Constructor did his work" << std::endl;
	_type = "Dog";
	return;
}

Dog::Dog( std::string type) :  Animal( type ) {

	std::cout << "Dog Parametric Constructor did his work" << std::endl;
	_type = "Dog";
	return;
}

Dog::Dog( Dog const & src ) : Animal( src) {

	std::cout << "Dog Copy Constructor did his work" << std::endl;
	*this = src;
	return;
}

Dog::~Dog( void ) {

		std::cout << "Dog Destructor did his work" << std::endl;
		return;
}


void	Dog::makeSound( void ) const {

	std::cout << "Dog sound: Wouaf wouafffffff" << std::endl;
	return;
}
