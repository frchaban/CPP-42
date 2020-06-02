#include "Squad.hpp"

Squad::Squad(): _N_units(0), _Squad(NULL)
{

}

Squad::~Squad()
{
	t_container *list;

	if (this->_Squad== NULL)
		return ;
	for (int i = 0; i < this->getCount(); i++)
	{
		delete this->_Squad->unit;
		list = this->_Squad;
		this->_Squad = this->_Squad->next;
		delete list;
	}
}

Squad::Squad(Squad const &other)
{
	t_container *list;

	if (this->_Squad != NULL)
	{
		for (int i = 0; i < this->getCount(); i++)
		{
			delete this->_Squad->unit;
			list = this->_Squad;
			this->_Squad = this->_Squad->next;
			delete list;
		}
	}

	for(int i = 0; i< other.getCount(); i++)
	{
		this->push(other.getUnit(i));
	}
	this->_N_units = other.getCount();
}

Squad& Squad::operator=(const Squad& other)
{
	t_container *list;

	if (this->_Squad != NULL)
	{
		for (int i = 0; i < this->getCount(); i++)
		{
			delete this->_Squad->unit;
			list = this->_Squad;
			this->_Squad = this->_Squad->next;
			delete list;
		}
	}

	for(int i = 0; i< other.getCount(); i++)
	{
		this->push(other.getUnit(i));
	}
	this->_N_units = other.getCount();
	return (*this);
}

int Squad::getCount() const
{
	return(this->_N_units);
}

ISpaceMarine* Squad::getUnit(int n) const
{
	t_container *lst;

	if (n < 0 || n > this->getCount())
		return (NULL);
	lst = this->_Squad;
	for (int i=0; i < n; i++)
	{
		lst= lst->next;
	}
	return(lst->unit);
}

int Squad::push(ISpaceMarine *marine)
{
	t_container  *tmp;

    tmp = this->_Squad;
    if (marine != NULL && this->_isMarineIn(tmp, marine) == false)
    {
        tmp = this->_Squad;
        if (this->_Squad != NULL)
        {
            while (tmp->next)
            {
                tmp = tmp->next;
            }
            tmp->next = new t_container;
            tmp->next->unit = marine;
            tmp->next->next = NULL;
        }
        else
        {
            this->_Squad = new t_container;
            this->_Squad->unit = marine;
            this->_Squad->next = NULL;
        }
        this->_N_units += 1;
    }
    return (this->_N_units);
}

bool Squad::_isMarineIn(t_container *squad, ISpaceMarine *marine)
{
	if (!squad)
		return (false);
	while (squad)
	{	if (squad->unit == marine)
			return (true);
		squad = squad->next;
	}
	return(false);
}
