#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	Pokemon() { cout << "Pokemon Constructor" << endl; }
	~Pokemon() { cout << "Pokemon Destructor" << endl; }
	virtual void attack() const { cout << "Pokemon attacks" << endl; }
};

class Pikachu : public Pokemon
{
public:
	Pikachu() { cout << "Pikachu Constructor" << endl; }
	~Pikachu() { cout << "Pikachu Destructor" << endl; }
	void attack() const { cout << "1M Volt Thunderbolt" << endl; }
};

int main()
{

	Pokemon* ptr;

	ptr = new Pokemon();
	ptr->attack();
	delete ptr;
	ptr = nullptr;

	ptr = new Pikachu();
	ptr->attack();
	delete ptr;

	return 0;
}
