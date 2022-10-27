//Cat.cpp    CPP04    ex01

#include <iostream>
#include "Cat.hpp"

Cat::Cat( void ) {

	std::cout << "I am the Cat Default Constructor" << std::endl;
	_type = "Cat";
	_bPTR = new Brain();	
	return;
}

Cat::Cat( std::string type) :  Animal( type ) {

	std::cout << "I am the Cat Parametric Constructor" << std::endl;
	_type = "Cat";
	_bPTR = new Brain();	
	return;
}

Cat::Cat( Cat const & src ) : Animal( src) {

	std::cout << "I am the Cat Copy Constructor" << std::endl;
	*this = src;
	_bPTR = new Brain();	
	return;
}

Cat::~Cat( void ) {

		std::cout << "I am the Cat Destructor" << std::endl;
		delete _bPTR;
		return;
}


void	Cat::makeSound( void ) const {

	std::cout << "Cat sound: Miiiaaaouwww" << std::endl;
	return;
}
