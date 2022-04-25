#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public :

	FragTrap( void );
	FragTrap( const std::string & name );
	FragTrap( FragTrap const & src );
	~FragTrap( void );

	void attack(const std::string & target );
	void highFivesGuys( void );

};

#endif
