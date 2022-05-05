#include <iostream>
#include <stdint.h>

typedef struct Data {

	int g;
	char c;

} Data;

uintptr_t serialize(Data* ptr)
{
	uintptr_t i;
	
	i = reinterpret_cast<uintptr_t>(ptr);

	return i;
}

Data* deserialize(uintptr_t raw)
{
	Data* newptr;

	newptr = reinterpret_cast<Data*>(raw);

	return newptr;
}

int main()
{
	Data*	ptr;
	ptr = new Data;

	std::cout << ptr << std::endl;
	std::cout << deserialize(serialize(ptr)) << std::endl;

	delete ptr;

	return 0;
}
