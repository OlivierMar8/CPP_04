//WrongCat.cpp    CPP04    ex00

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {

	std::cout << "I am the WrongCat Default Constructor called" << std::endl;
	_type = "WrongCat";
	return;
}

WrongCat::WrongCat( std::string type) :  WrongAnimal( type ) {

	std::cout << "I am the WrongCat Parametric Constructor called" << std::endl;
	_type = "WrongCat";
	return;
}

WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal( src) {

	std::cout << "I am the WrongCat Copy Constructor called" << std::endl;
	*this = src;
	return;
}

WrongCat::~WrongCat( void ) {

		std::cout << "I am the WrongCat Destructor called" << std::endl;
		return;
}


void	WrongCat::makeSound( void ) const {

	std::cout << "WrongCat sound: Miiiaaaouwww" << std::endl;
	return;
}
