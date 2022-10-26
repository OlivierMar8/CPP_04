//main.cpp	CPP04 ex00

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"


int	main( void )
{
	Animal	a;
	WrongAnimal b;
	const Animal* meta = new Animal;
	const Animal* j = new Dog();
	Dog d;
	const WrongAnimal* i = new WrongCat();
	const WrongAnimal* k = new WrongCat();
	a.makeSound();
	b.makeSound();
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	k->makeSound();

	std::cout << a << std::endl;
	std::cout << *i << std::endl;

	delete meta;
	delete i;
	delete j;

	return 0;
}

