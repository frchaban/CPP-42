#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

# include <iomanip>
# include <iostream>
# include <string>

class Contact {
	public :
		std::string info[11];
		void fill(void);
		void print(void);
};

#endif
