//Cat.hpp CPP04   ex00

#ifndef CAT_HPP
# define CAT_HPP

#include <ostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal {

	public:

		Cat( void );					//Canonique
		Cat( std::string type );
		Cat( Cat const & src );	//Canonique	
		~Cat( void );				//Canonique	


		void	makeSound( void );

};

#endif
