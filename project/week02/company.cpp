#include "company.h"

Company::Company(string name, string tel) : name(name), tel(tel)
{
}
Company::~Company()
{
}
void Company::print() const
{
	cout << "Company Name : " << name << '\n';
	cout << "Tel : " << tel << '\n';
}