#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	virtual void makeSound() { cout << "Animals make sound\n"; }
};

class Dog : public Animal {
public:
	void makeSound() { cout << "Worf!\n"; }
};

class Cat : public Animal {
public:
	void makeSound() { cout << "Mew!\n"; }
};

int main()
{
	Animal* p = new Animal();
	p->makeSound();
	delete p;
	p = nullptr;

	Animal* p = new Dog();
	p->makeSound();
	
	Dog* pd = (Dog*)p; // Down Casting | Old C style
	pd->makeSound();

	delete p;
	p = nullptr;
	return 0;
}
