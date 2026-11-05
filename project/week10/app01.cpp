#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter an integer: ";
		cin >> num1;
		cout << "Enter another integer: ";
		cin >> num2;

		try
		{
			if (num2 == 0) throw 0;
			int result = num1 / num2;
			cout << "The result is " << result << endl;
		}
		catch (int x)
		{
			cout << "Division by 0 cannot be performed" << endl;
		}
	}
	return 0;
}