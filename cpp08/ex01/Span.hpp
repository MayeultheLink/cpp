#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span {

public :

	Span( void );
	Span( unsigned int n );
	Span( Span const & src );
	~Span( void );
	Span & operator=( Span const & rhs );

	void addNumber( int i );
	void randomGenerator( void );
	void fillWithRange( std::vector<int>::iterator, std::vector<int>::iterator );
	int shortestSpan();
	int longestSpan();

private :

	std::vector<int> _container;
	unsigned int _size;

class containerIsFull : public std::exception {
	
	public :

		virtual const char* what() const throw();
	
	};

class cannotExecute : public std::exception {
	
	public :

		virtual const char* what() const throw();
	
	};

};

#endif
