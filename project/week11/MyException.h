#pragma once
#include "DynamicArray.h"
class MyException {
private:
	int errorCode;
	const char* errorMessage;
	const DynamicArray* errorAddress;
public:
	MyException(int ec, const char* em, const DynamicArray* ea);
	const DynamicArray* getea() const;
	const char* getem() const;
	const int getec() const;
};