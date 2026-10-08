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
	void makeSound() { cout << "Meaw!\n"; }
};

int main()
{
	Animal* p = new Animal();
	p->makeSound();
	delete p;
	p = nullptr;

	p = new Dog();
	p->makeSound();
	
	// p는 Dog를 가리키는 포인터이므로 Cat에 넣으려고 하면 Null값이 들어감
	//Cat* pc = dynamic_cast<Cat*>(p) ; // Down Casting | Modern C style
	//pc->makeSound();

	 Dog* pd = (Dog*)p; // Down Casting | Old C style
	 pd->makeSound();


	
	
	delete p;
	p = nullptr;
	return 0;
}
