#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	public :
		Squad();
		~Squad();
		Squad(Squad const &other);
		Squad& operator=(const Squad& other);

		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine*);

	protected :

		typedef struct			s_container
		{
			ISpaceMarine		*unit;
			struct s_container	*next;
		}						t_container;

		int						_N_units;
        t_container				*_Squad;

		bool 					_isMarineIn(t_container *squad, ISpaceMarine *marine);
};

#endif
