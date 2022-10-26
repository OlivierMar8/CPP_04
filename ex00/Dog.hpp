//Dog.hpp CPP04   ex00

#ifndef CAT_HPP
# define CAT_HPP

#include <ostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal {

	public:

		Dog( void );					//Canonique
		Dog( std::string type );
		Dog( Dog const & src );	//Canonique	
		~Dog( void );				//Canonique	


		void	makeSound( void );

};

#endif
