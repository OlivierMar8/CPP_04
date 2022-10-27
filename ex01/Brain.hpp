//Brain.hpp	CPP04	ex01

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <ostream>
#include <string>

class Brain {

	public:

		Brain( void );					//Canonique
		Brain( Brain const & src );	//Canonique	
		~Brain( void );				//Canonique	

		Brain &	operator=( Brain const & rhs );//Canonique

		std::string *		getIdeas( void );
//		void				setIdeas( std::string * ideas );

		std::string 		_ideas[100];

};

#endif
