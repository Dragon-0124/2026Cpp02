#include <iostream>
using namespace std;

template <typename T>
T smaller(T first, T second)
{
    //cout << static_cast<int>(first) << '\n';  // modern style, c++11
    //cout << (int)second << '\n'; // old style, c style`

    if (first < second)
    {
        return first;
    }
    return second;
}

int main()
{
    cout << smaller('a', 'Z') << endl;
    cout << smaller(-11, -14) << endl;
    cout << smaller(2.71, 3.14) << endl;
    return 0;
}