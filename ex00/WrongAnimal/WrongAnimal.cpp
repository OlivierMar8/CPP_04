//WrongAnimal.cpp    CPP04    ex00

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {

	std::cout << "Default Constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( std::string type) : _type( type ) {

	std::cout << "Parametric Constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & src ) {

	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::~WrongAnimal( void ) {

		std::cout << "Destructor called" << std::endl;
		return;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs) {

		std::cout << "Assignement operator called" << std::endl;

		if ( this != &rhs )
			this->_type = rhs.getType();
		return *this;
}

std::string		WrongAnimal::getType( void ) const {

		return this->_type;
}

void	WrongAnimal::setType( std::string type ) {

	_type = type;
	return;
}

void	WrongAnimal::makeSound( void ) const {

	std::cout << "WrongAnimal sound: (no audible sound)" << std::endl;
	return;
}

std::ostream &	operator<<( std::ostream & o, WrongAnimal const & i) {

	o << "The value of _type is : " << i.getType();

	return o;
}
