#include "DynamicArray.h"
#include "MyException.h"
#include <iostream>

DynamicArray::DynamicArray(int size) : size(size)
{
	this->size = size;
	ptr = new int[size];  // dynamic allocation (heap memory)
	std::cout << "(" << this << ") Object created \n";
	throw MyException(3000, "Memorry error", this);
}

DynamicArray::~DynamicArray()
{
	delete[] ptr;
	ptr = nullptr;
	std::cout << "(" << this << ") Pointer deleted\n";
}

int DynamicArray::getSize() const
{
	return size;
}

void DynamicArray::setValue(int idx, int value)
{
	if (idx >= 0 && idx < getSize())
		ptr[idx] = value;
	else
		throw MyException(-1, "Beyond allocated memory space(Set value)", this);
	
}

int DynamicArray::getValue(int idx) const
{
	if (idx >= 0 && idx < getSize())
		return ptr[idx];
	else
		throw MyException(-2, "Beyond allocated memory space(Get value)", this);
}
