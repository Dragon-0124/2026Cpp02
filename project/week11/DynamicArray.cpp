#include "DynamicArray.h"
#include "MyException.h"

DynamicArray::DynamicArray(int size) : size(size)
{
	this->size = size;
	ptr = new int[size];  // dynamic allocation (heap memory)
}

DynamicArray::~DynamicArray()
{
	delete[] ptr;
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
		throw MyException(-1, "Beyond allocated memory space(Set value)\n", this);
	
}

int DynamicArray::getValue(int idx) const
{
	if (idx >= 0 && idx < getSize())
		return ptr[idx];
	else
		throw MyException(-2, "Beyond allocated memory space(Get value)\n", this);
}
