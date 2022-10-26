//Animal.cpp    CPP04    ex00

#include <iostream>
#include "Animal.hpp"

Animal::Animal( void ) {

	std::cout << "Default Constructor called" << std::endl;
	return;
}

Animal::Animal( std::string type) : _type( type ) {

	std::cout << "Parametric Constructor called" << std::endl;
	return;
}

Animal::Animal( Animal const & src ) {

	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}

Animal::~Animal( void ) {

		std::cout << "Destructor called" << std::endl;
		return;
}

Animal &	Animal::operator=( Animal const & rhs) {

		std::cout << "Assignement operator called" << std::endl;

		if ( this != &rhs )
			this->_type = rhs.getType();
		return *this;
}

std::string		Animal::getType( void ) const {

		return this->_type;
}

void	Animal::setType( std::string type ) {

	_type = type;
	return;
}

void	Animal::makeSound( void ) {

	std::cout << "Animal sound: (no audible sound)" << std::endl;
	return;
}

std::ostream &	operator<<( std::ostream & o, Animal const & i) {

	o << "The value of _type is : " << i.getType();

	return o;
}
