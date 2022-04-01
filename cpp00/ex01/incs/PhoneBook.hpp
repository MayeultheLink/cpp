#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cstring>
# include <sstream>
# include <locale>
# include "Contact.hpp"

class	PhoneBook {
	
	public:

	PhoneBook ( void );
	~PhoneBook ( void );

	void	createContact(int i);
	void	searchContact(void) const;

	private:

	Contact contacts[8];

	void	printTab(void) const;

};

#endif
