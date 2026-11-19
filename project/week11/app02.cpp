#include <new>
#include <iostream>
using namespace std;

int main()
{
    try
    {
        //int* a = new int[0xfffffffff];  // bad allocation
        //int* a = new int[0x1ffffffff];  // 
        int* a = new int[0xffffffff];  //
        delete[] a;
        a = nullptr;
        cout << "Á¾·á\n";
    }
    catch (bad_alloc ex)
    {
        cout << ex.what() << '\n';
    }

    return 0;
}