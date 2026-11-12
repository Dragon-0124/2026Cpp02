#pragma once
#include "DynamicArray.h"

class MyException {
private:
	int errorCode;
	const char* errorMessage;
	const DynamicArray* errorDAddress;
	const int* errorIAddress;
public:
	MyException(int ec, const char* em, const DynamicArray* ea);
	MyException(int ec, const char* em, const int* ea);
	const DynamicArray* getea() const;
	const char* getem() const;
	const int getec() const;
};