//main.cpp	CPP04 ex00

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int	main( void )
{
	std::string * Idee;
	(void)Idee;
	Brain*  br = new Brain();
	br->setAnIdea(2, "Top");
	Brain tr(*br);
	std::cout << tr.getAnIdea(2) << std::endl;
	Cat	c;
	delete br;
	std::cout << tr.getAnIdea(2) << std::endl;
	Idee = tr.getIdeas();
	
	const Animal * an = new Cat();
	an->makeSound();
	delete an;

	const Animal * ad = new Dog();
	ad->makeSound();
	delete ad;

	return 0;

}

