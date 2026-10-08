#pragma once
class Pokemon // interface(abstract class)
{
public:
	//Pokemon() {}
	virtual ~Pokemon() {}
	virtual void attack() const = 0; // pure virtual function
};