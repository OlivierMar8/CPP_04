//main.cpp	CPP04 ex00

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int	main( void )
{
	Animal * tabAnim[20];

	for (int i = 0; i < 10; i++) {
		std::cout << "- " << i << " - ";
		tabAnim[i] = new Cat();
	}


	for (int i = 10; i < 20; i++) {
		std::cout << "- " << i << " - ";
		tabAnim[i] = new Dog();
	}
	std::string * Idee;
	(void)Idee;
	Brain*  br = new Brain();
	br->setAnIdea(2, "Top");
	Brain tr(*br);
	std::cout << tr.getAnIdea(2) << std::endl;
	Cat	c;
	std::cout << "Type de c: " <<c.getType() << std::endl;
	delete br;
	std::cout << tr.getAnIdea(2) << std::endl;
	Idee = tr.getIdeas();
	
	const Animal * an = new Cat();
	an->makeSound();
	delete an;

	const Animal * ad = new Dog();
	ad->makeSound();
	delete ad;

	for (int i = 0; i < 20; i++) {
		std::cout << "# " << i << " # ";
		delete tabAnim[i];
	}

	return 0;

}

