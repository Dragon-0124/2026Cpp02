#include <iostream>
#include "DynamicArray.h"
#include "MyException.h"
using namespace std;

int main() {
		try {
		DynamicArray da1(5);
		da1.setValue(0, 99);
		da1.setValue(4, -77);
		int num1, num2;
		cout << "Address 1st u want to check Value : ";
		cin >> num1;

		cout << "Address 2nd u want to check Value : ";
		cin >> num2;
		
		
		if (num1 > da1.getSize())
			throw MyException(-2, "Beyond allocated memory space(Get value)", da1.getptr(num1));
		else if(num2 > da1.getSize())
			throw MyException(-2, "Beyond allocated memory space(Get value)", da1.getptr(num2));
		else
		{
			cout << "Value of Address No." << num1 << " : " << da1.getValue(num1) << '\n';
			cout << "Value of Address No." << num2 << " : " << da1.getValue(num2) << '\n';
		}
		
	}
	catch (const char* errorCode) {
		cout << errorCode;
	}
	catch (int errorCode) {
		if (errorCode == 1000)
			cout << errorCode;
		else
			cout << errorCode;
	}
	catch (const MyException& err) {
		cout << err.getec() << ": " << err.getem() << "(" << err.getec() << ")\n";
	}

	return 0;
}