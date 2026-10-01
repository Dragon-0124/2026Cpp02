#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	//Pokemon() { cout << "Pokemon Constructor" << endl; }
	virtual~Pokemon() { cout << "Pokemon Destructor" << endl; }
	//void attack() const { cout << "Pokemon attacks" << endl; }
	virtual void attack() const { cout << "Pokemon attacks" << endl; }
};

class Pikachu : public Pokemon
{
public:
	//Pikachu() { cout << "Pikachu Constructor" << endl; }
	~Pikachu() { cout << "Pikachu Destructor" << endl; }
	void attack() const { cout << "1M Volt Thunderbolt" << endl; }
};

class Squirtle : public Pokemon
{
public:
	//Pikachu() { cout << "Pikachu Constructor" << endl; }
	~Squirtle() { cout << "Squirtle Destructor" << endl; }
	void attack() const { cout << "Hydropump Attack" << endl; }
};

int main()
{
	Pokemon* pokemons[4];
	pokemons[0] = new Squirtle();
	pokemons[1] = new Pikachu();
	pokemons[2] = new Pokemon();
	pokemons[3] = new Pokemon();

	return 0;
}
