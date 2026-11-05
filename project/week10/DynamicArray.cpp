#include "DynamicArray.h"

DynamicArray::DynamicArray(int size) : size(size)
{
	this->size = size;
	ptr = new int[size];  // dynamic allocation (heap memory)
}

DynamicArray::~DynamicArray()
{
	delete ptr;
	ptr = nullptr;
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
		throw -1;
	
}

int DynamicArray::getValue(int idx) const
{
	return ptr[idx];
}
