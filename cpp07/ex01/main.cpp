//#include ""
#include <iostream>

template <typename T, typename U, typename V>
void iter(T tab, U size, V *ft)
{
	for (U count=0; count < size; count++)
		tab[count] = ft(tab[count]);
}

char ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return c;
}

int main()
{
	char str[6] = "salut";

	iter(str, 5, ft_toupper);
	std::cout << str << std::endl;
}
