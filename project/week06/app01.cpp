#include <iostream>
using namespace std;

class Complex {
private:
	int real;		// 실수부
	int imaginary;	// 허수부

public:
	/*
	Complex() {
		real = 0;
		imaginary = 0;
	}
	*/

	Complex() : real(0), imaginary(0) {	}

	Complex(int real, int imaginary) : real(real), imaginary(imaginary) {
		//this->real = real;
		//this->imaginary = imaginary
	}
	
	int getReal() const{ // const -> 값 변경 막기(mutable같은 예외는 존재)
		return real;
	}
	int getImag() const {
		return imaginary;
	}


};

int main(){
	Complex c1(7, 2);
	cout << c1.getReal() << "+" << c1.getImag() << "i\n";

	return 0;
};