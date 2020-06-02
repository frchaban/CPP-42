#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{
	public:
		Victim(std::string);
		~Victim();
		Victim(Victim const &other);
		Victim& operator=(Victim const &other);
		std::string get_name(void) const;
		virtual void getPolymorphed(void) const;

	protected:
		std::string _Name;
};

std::ostream& operator<<(std::ostream &out, Victim const &victim);
#endif
