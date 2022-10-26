//Animal.hpp CPP04   ex00

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <ostream>
#include <string>

class Animal {

	public:

		Animal( void );					//Canonique
		Animal( std::string type );
		Animal( Animal const & src );	//Canonique	
		virtual ~Animal( void );				//Canonique	

		Animal &	operator=( Animal const & rhs );//Canonique

		std::string		getType( void ) const;
		void			setType( std::string type );
		virtual void	makeSound( void );


	protected:

		std::string	_type;

};

std::ostream &		operator<<( std::ostream & o, Animal const & i );

#endif
