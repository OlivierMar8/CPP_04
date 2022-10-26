//WrongCat.hpp CPP04   ex00

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <ostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:

		WrongCat( void );					//Canonique
		WrongCat( std::string type );
		WrongCat( WrongCat const & src );	//Canonique	
		~WrongCat( void );				//Canonique	


		void	makeSound( void ) const;

};

#endif
