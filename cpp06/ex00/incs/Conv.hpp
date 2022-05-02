#ifndef CONV_H
# define CONV_H

#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>

class Conv {

public :

	Conv( void );
	Conv( const Conv & src );
	~Conv( void );
	Conv & operator=( const Conv & rhs );

	void analyseType( const char* value );
	void getValues( const char* value );
	void print( void );

	int type;
	static const int typeChar = 0;
	static const int typeInt = 1;
	static const int typeFloat = 2;
	static const int typeDouble = 3;

	char charValue;
	int intValue;
	float floatValue;
	double doubleValue;

class unknownTypeException : public std::exception {

	public :

		virtual const char* what() const throw() {return ("Cannot find a type for your entry");}

	};

};

#endif
