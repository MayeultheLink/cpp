#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind( T & container, int goal ) {

	typename T::iterator it;

	it = find(container.begin(), container.end(), goal);

	if (it == container.end())
		throw std::overflow_error("No occurrence found");

	return it;

}

#endif
