#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	AMateria*	memory[4];
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource & other);
		const MateriaSource & operator=(const MateriaSource & other);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif