#include <iostream>
using namespace std;

class Complex {
private:
	int real;		// 실수부
	int imaginary;	// 허수부

public:
	Complex() : real(0), imaginary(0) {	}

	Complex(int real, int imaginary) : real(real), imaginary(imaginary) {
	}
	
	Complex operator+(Complex right) { // Operator overloading for addition
		return Complex(this->real + right.real, this->imaginary + right.imaginary);
	}

	Complex operator++(int) { // 매개변수자리 int -> 후위연산 의미 tag
		Complex backup(this->real, this->imaginary); // 이전상태 백업
		real++;
		return backup;
	}
	/*
	Complex operator++() { // 전위연산
		return Complex(++this->real, this->imaginary); // Complex 객체를 만들어서 메모리 효율이 떨어짐
	}
	*/
	Complex& operator++() { // 개선판(Complex 객체 생성 x)
		real++;
		return *this;
	}

	int getReal() const{ return real; }
	int getImag() const { return imaginary; }

	
};

Complex operator+(Complex left, Complex right) { // Non-member Operator Overloading
	return Complex(left.getReal() + right.getReal(), left.getImag() + right.getImag());
}


int main(){
	Complex c1(7, 2);
	Complex c2(2, 9);

	cout << "c1 : " << c1.getReal() << "+" << c1.getImag() << "i\n";
	cout << "c2 : " << c2.getReal() << "+" << c2.getImag() << "i\n";
	Complex c3 = c1.operator+(c2);	// Complex c3 = c1 + c2;
	Complex c3 = operator+(c1, c2);

	cout << "c3 : " << c3.getReal() << "+" << c3.getImag() << "i\n";
	
	Complex c4 = c3++;
	cout << "c4 : " << c4.getReal() << "+" << c4.getImag() << "i\n";
	cout << "c3 : " << c3.getReal() << "+" << c3.getImag() << "i\n";

	Complex c5 = ++c3;
	cout << "c5 : " << c5.getReal() << "+" << c5.getImag() << "i\n";
	cout << "c3 : " << c3.getReal() << "+" << c3.getImag() << "i\n";
	return 0;
};