#include <iostream>
#include "DynamicArray.h"
using namespace std;

int main() {
	DynamicArray da1(5);

	try {
		da1.setValue(0, 99);
		da1.setValue(4, -77);
		//da1.setValue(9, 3); // exception
		cout << da1.getValue(4) << '\n';
		cout << da1.getValue(3) << '\n'; // dummy value(Not cleared)
		cout << da1.getValue(9) << '\n'; // exception - beyond range
	}
	catch (int error) {
		if (error == -1)
			cout << "Error Code: " << error << "\nBeyond allocated memory space(Set value)\n";
		else if (error == -2)
			cout << "Error Code: " << error << "\nBeyond allocated memory space(Get value)\n";
	}
	return 0;
}		