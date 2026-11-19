#include <iostream>
#include <cstring>
using namespace std;

template <typename U>
void printinfo(U data)
{
    cout << data << '\n';
    cout << "General Template\n";
}

template <>
void printinfo<const char*>(const char* data)
{
    cout << data << '\n';
    cout << "Specialized Template\n";
    //cout << strlen(data) << "\n";
}

int main()
{
    printinfo(55);
    printinfo(2.71);
    printinfo("C++");
    return 0;
}