#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {

public :

	Array( void ) : _size(0), _array(NULL) {}
	Array( unsigned int n ) : _size(n) {
	if (this->_size < 0)
		throw std::overflow_error("Index is invalid");
	this->_array = new T[_size];
}

Array( const Array & src ) {
	*this = src;
}

Array & operator=( const Array & rhs ) {
	this->_size = rhs._size;
	this->_array = new T[this->_size];
	for (unsigned int i=0; i < this->_size; i++)
		this->_array[i] = rhs._array[i];
	return *this;
}

~Array( void ) {
	delete [] this->_array;
}

T & operator[]( int i ) {
	if (i >= static_cast<int>(this->_size) || i < 0)
		throw std::overflow_error("Index is invalid");
	return this->_array[i];
}

private :

	unsigned int _size;
	T *_array;

};

#endif
