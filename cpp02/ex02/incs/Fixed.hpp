#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class	Fixed {

public :

	Fixed();
	Fixed( const int n );
	Fixed( const float f );
	Fixed( Fixed const & src );
	~Fixed();

	Fixed & operator=( Fixed const & rhs );
	bool operator>( Fixed const & rhs ) const;
	bool operator<( Fixed const & rhs ) const;
	bool operator>=( Fixed const & rhs ) const;
	bool operator<=( Fixed const & rhs ) const;
	bool operator==( Fixed const & rhs ) const;
	bool operator!=( Fixed const & rhs ) const;
	Fixed operator+( Fixed const & rhs ) const;
	Fixed operator-( Fixed const & rhs ) const;
	Fixed operator*( Fixed const & rhs ) const;
	Fixed operator/( Fixed const & rhs ) const;
	Fixed & operator++( void );
	Fixed operator++( int i );
	Fixed & operator--( void );
	Fixed operator--( int i );

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	static Fixed & min( Fixed & a, Fixed & b );
	static Fixed & max( Fixed & a, Fixed & b );
	static const Fixed & min( const Fixed & a, const Fixed & b );
	static const Fixed & max( const Fixed & a, const Fixed & b );

private :

	int _n;
	static const int _b = 8;

};

std::ostream & operator<<( std::ostream & o, Fixed const & inst );
int ft_pow(int i, int pow);

#endif
