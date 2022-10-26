//WrongWrongAnimal.hpp CPP04   ex00

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <ostream>
#include <string>

class WrongAnimal {

	public:

		WrongAnimal( void );					//Canonique
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const & src );	//Canonique	
		virtual ~WrongAnimal( void );				//Canonique	

		WrongAnimal &	operator=( WrongAnimal const & rhs );//Canonique

		std::string		getType( void ) const;
		void			setType( std::string type );
		void	makeSound( void ) const;


	protected:

		std::string	_type;

};

std::ostream &		operator<<( std::ostream & o, WrongAnimal const & i );

#endif
