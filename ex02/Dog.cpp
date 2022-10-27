//Dog.cpp    CPP04    ex02

#include <iostream>
#include "Dog.hpp"

Dog::Dog( void ) {

	std::cout << "Dog Default Constructor did his work" << std::endl;
	_type = "Dog";
	_bPTR = new Brain();
	return;
}

Dog::Dog( std::string type) :  Animal( type ) {

	std::cout << "Dog Parametric Constructor did his work" << std::endl;
	_type = "Dog";
	_bPTR = new Brain();
	return;
}

Dog::Dog( Dog const & src ) : Animal( src) {

	std::cout << "Dog Copy Constructor did his work" << std::endl;
	*this = src;
	_bPTR = new Brain();
	return;
}

Dog::~Dog( void ) {

		std::cout << "Dog Destructor did his work" << std::endl;
		delete _bPTR;
		return;
}


void	Dog::makeSound( void ) const {

	std::cout << "Dog sound: Wouaf wouafffffff" << std::endl;
	return;
}
