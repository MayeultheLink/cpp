#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	Animal* animals[2];
		animals[0] = new Dog();
		animals[1] = new Cat();

	for (int i=0; i < 2; i++)
		delete animals[i];

	Dog basic;
	basic.setIdeas("eating");
	{
		Dog tmp = basic;
		tmp.getIdeas();
		tmp.setIdeas("playing");
		tmp.getIdeas();
	}
	basic.getIdeas();

	return 0;
}
