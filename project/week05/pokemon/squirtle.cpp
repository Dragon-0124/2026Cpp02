#include "Squirtle.h"
#include "PCH.h"
using namespace std;

//Squirtle::Squirtle() {}

Squirtle::~Squirtle() { cout << "Squirtle Destructor" << endl; }


void Squirtle::attack() const
{
	cout << "Hydro Pump" << endl;
}