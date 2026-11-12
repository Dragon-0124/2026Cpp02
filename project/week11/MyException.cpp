#include "MyException.h"

MyException::MyException(int ec, const char* em, const DynamicArray* ea)
	: errorCode(ec), errorMessage(em), errorDAddress(ea)
{
}

MyException::MyException(int ec, const char* em, const int* ea)
	: errorCode(ec), errorMessage(em), errorIAddress(ea)
{
}

const DynamicArray* MyException::getea() const
{
	return errorDAddress;
}

const char* MyException::getem() const
{
	return errorMessage;
}

const int MyException::getec() const
{
	return errorCode;
}



