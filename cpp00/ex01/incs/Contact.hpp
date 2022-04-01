#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact {
	
	public:

	Contact(void);
	~Contact(void);

	void	getInfo(int i);
	void	printInfos(void) const;
	void	printTabLine(void) const;
	bool	exists(void) const;

	private:

	bool	create;
	int		index;
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	void	printTabInfo(std::string str) const;

};

#endif
