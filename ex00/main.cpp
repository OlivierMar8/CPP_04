//main.cpp	CPP04 ex00

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int	main( void )
{
	Animal	a;
	const Animal* meta = new Animal;
	const Animal* j = new Dog();
	Dog d;
	const Animal* i = new Cat();

	a.makeSound();
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << a << std::endl;
	std::cout << *i << std::endl;

	delete meta;
	delete i;
	delete j;

	return 0;
}

