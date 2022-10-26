//Cat.cpp    CPP04    ex00

#include <iostream>
#include "Cat.hpp"

Cat::Cat( void ) {

	std::cout << "I am the Cat Default Constructor called" << std::endl;
	_type = "Cat";
	return;
}

Cat::Cat( std::string type) :  Animal( type ) {

	std::cout << "I am the Cat Parametric Constructor called" << std::endl;
	_type = "Cat";
	return;
}

Cat::Cat( Cat const & src ) : Animal( src) {

	std::cout << "I am the Cat Copy Constructor called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat( void ) {

		std::cout << "I am the Cat Destructor called" << std::endl;
		return;
}


void	Cat::makeSound( void ) const {

	std::cout << "Cat sound: Miiiaaaouwww" << std::endl;
	return;
}
