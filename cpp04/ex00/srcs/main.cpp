#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{

	std::cout << "-----------> const Animal* = new Animal(); <------------" << std::endl << std::endl;

	const Animal* meta1 = new Animal();
	std::cout << meta1->getType() << " goes :" << std::endl;
	meta1->makeSound();
	delete meta1;

	std::cout << std::endl;

	std::cout << "-----------> const Animal* = new Cat(); <------------" << std::endl << std::endl;

	const Animal* cat1 = new Cat();
	std::cout << cat1->getType() << " goes :" << std::endl;
	cat1->makeSound();
	delete cat1;

	std::cout << std::endl;

	std::cout << "-----------> const Animal* = new Dog(); <------------" << std::endl << std::endl;

	const Animal* dog1 = new Dog();
	std::cout << dog1->getType() << " goes :" << std::endl;
	dog1->makeSound();
	delete dog1;

	std::cout << std::endl;

	std::cout << "-----------> const WrongAnimal* = new WrongAnimal(); <------------" << std::endl << std::endl;

	const WrongAnimal* meta4 = new WrongAnimal();
	std::cout << meta4->getType() << " goes :" << std::endl;
	meta4->makeSound();
	delete meta4;

	std::cout << std::endl;

	std::cout << "-----------> const WrongAnimal* = new WrongCat(); <------------" << std::endl << std::endl;

	const WrongAnimal* cat4 = new WrongCat();
	std::cout << cat4->getType() << " goes :" << std::endl;
	cat4->makeSound();
	delete cat4;

	std::cout << std::endl;


/*
	std::cout << "-----------> const Animal animal; <------------" << std::endl << std::endl;

	const Animal meta2;
	std::cout << meta2.getType() << " goes :" << std::endl;
	meta2.makeSound();

	std::cout << std::endl;

	std::cout << "-----------> const Cat cat; <------------" << std::endl << std::endl;

	const Cat cat2;
	std::cout << cat2.getType() << " goes :" << std::endl;
	cat2.makeSound();

	std::cout << std::endl;

	std::cout << "-----------> const Dog dog; <------------" << std::endl << std::endl;

	const Dog dog2;
	std::cout << dog2.getType() << " goes :" << std::endl;
	dog2.makeSound();

	std::cout << std::endl;
*/



/*


	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << meta.getType() << " goes :" << std::endl;
	meta.makeSound();
	std::cout << dog.getType() << " goes :" << std::endl;
	dog.makeSound();
	std::cout << cat.getType() << " goes :" << std::endl;
	cat.makeSound();

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << wrongmeta.getType() << " goes :" << std::endl;
	wrongmeta.makeSound();
	std::cout << wrongcat.getType() << " goes :" << std::endl;
	wrongcat.makeSound();

	delete meta;
	delete dog;
	delete cat;
	delete wrongmeta;
	delete wrongcat;
*/
	return 0;
}
