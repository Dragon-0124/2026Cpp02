#include <iostream>
using namespace std;

class Complex {
private:
	int real;		// 실수부
	int imaginary;	// 허수부

public:
	Complex() : real(0), imaginary(0) {}

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

	Complex& operator++() { // 개선판(Complex 객체 생성 x)
		real++;
		return *this;
	}

	int getReal() const { return real; }
	int getImag() const { return imaginary; }
	
	int setReal(int real){
		this->real = real;
		return real;
	}
	int setImag(int imaginary){
		this->imaginary = imaginary;
		return imaginary;
	}


};

Complex operator+(Complex left, Complex right) { // Non-member Operator Overloading
	return Complex(left.getReal() + right.getReal(), left.getImag() + right.getImag());
}

ostream& operator<<(ostream& left, const Complex& right) {
	left << right.getReal() << "+" << right.getImag() << "i";
	return left;
}

istream& operator>>(istream& left, Complex& right) {
	int r, i = 0;
	cout << "실수부 : ";
	left >> r;
	cout << "허수부 : ";
	left >> i;
	right.setReal(r);
	right.setImag(i);
	return left;
}

int main() {
	Complex c1(7, 2);
	Complex c2(2, 9);

	cout << "c1 : "; cout << c1 << endl;
	cout << "c2 : "; cout << c2 << endl;
	Complex c3 = operator+(c1, c2);

	cout << "c3 : "; cout << c3 << endl;

	Complex c4 = c3++;
	cout << "c4 : "; cout << c4 << endl;
	cout << "c3 : "; cout << c3 << endl;

	Complex c5 = ++c3;
	cout << "c5 : "; cout << c5 << endl;
	cout << "c3 : "; cout << c3 << endl;

	Complex c6;
	cout << "c6 : "; cout << c6 << endl;
	cin >> c6;
	cout << "c6 : "; cout << c6 << endl;

	return 0;
};