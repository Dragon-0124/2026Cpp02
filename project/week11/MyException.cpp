#include "MyException.h"

MyException::MyException(int ec, const char* em, const DynamicArray* ea)
	: errorCode(ec), errorMessage(em), errorAddress(ea)
{
}

const DynamicArray* MyException::getea() const
{
	return errorAddress;
}

const char* MyException::getem() const
{
	return errorMessage;
}

const int MyException::getec() const
{
	return errorCode;
}



