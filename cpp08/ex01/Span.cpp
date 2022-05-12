#include "Span.hpp"

Span::Span( void ) : _size(0) {}

Span::Span( unsigned int n ) : _size(n) {}

Span::Span( Span const & src ) {
	*this = src;
}

Span::~Span( void ) {}

Span & Span::operator=( Span const & rhs ) {
	this->_container = rhs._container;
	this->_size = rhs._size;
	return *this;
}

void Span::addNumber( int i ) {
	if (this->_container.size() < this->_size)
		this->_container.push_back(i);
	else
		throw Span::containerIsFull();
}

const char* Span::containerIsFull::what( void ) const throw() {
	return ("The Span variable is full");
}

const char* Span::cannotExecute::what( void ) const throw() {
	return ("Cannot execute function with less than 2 numbers");
}

int Span::longestSpan() {
	if (this->_container.size() < 2)
		throw Span::cannotExecute();
	int &min = *min_element(this->_container.begin(), this->_container.end());
	int &max = *max_element(this->_container.begin(), this->_container.end());

	return max - min;
}

int Span::shortestSpan() {
	if (this->_container.size() < 2)
		throw Span::cannotExecute();

	std::vector<int> tmp = this->_container;

	sort(tmp.begin(), tmp.end());
	int result = *(tmp.begin() + 1) - *tmp.begin();

	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end() - 1; it++)
	{
		if (result > *(it + 1) - *it)
			result = *(it + 1) - *it;
	}

	return result;

}
