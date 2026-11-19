#include <iostream>
using namespace std;

template <typename T, int N>
void print(T(&array)[N])
{
    for (int i = 0; i < N; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[4] = { 7, 3, 5, 1 };
    double arr2[3] = { 7.5, 6.1, 4.6 };
    print(arr1);
    print(arr2);
    return 0;
}