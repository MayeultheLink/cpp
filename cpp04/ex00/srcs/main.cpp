#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << meta->getType() << " goes :" << std::endl;
	meta->makeSound();
	std::cout << dog->getType() << " goes :" << std::endl;
	dog->makeSound();
	std::cout << cat->getType() << " goes :" << std::endl;
	cat->makeSound();

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << wrongmeta->getType() << " goes :" << std::endl;
	wrongmeta->makeSound();
	std::cout << wrongcat->getType() << " goes :" << std::endl;
	wrongcat->makeSound();

	delete meta;
	delete dog;
	delete cat;
	delete wrongmeta;
	delete wrongcat;

	return 0;
}
