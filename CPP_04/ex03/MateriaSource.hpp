#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

/* ALL member functions of an Interface are "virtual" */

class MateriaSource : public IMateriaSource
{
	private:
		AMateria					*bag[4];
	public:
		MateriaSource();//											Default Constructor
		MateriaSource(const MateriaSource &other);//				Copy constructor
		MateriaSource&	operator=(const MateriaSource &other);//	Copy assignement operator

		void			learnMateria(AMateria *m);
		AMateria*		createMateria(std::string const &type);
		~MateriaSource();//											Destructor
};

#endif