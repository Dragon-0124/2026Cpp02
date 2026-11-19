#include <iostream>
using namespace std;

#define textcout(first, second) textcoutImpl(#first, first, #second, second)
template <typename T>
void textcoutImpl(const char* firstName, T first, const char* secondName, T second)
{
    cout << firstName << " : " << first << ", " << secondName << " : " << second << endl;
}

// 2. # 연산자로 변수 이름을 문자열로 바꿔서 위 함수에 전달하는 매크로


template <typename N>
void exchange(N* first, N* second)
{
    N temp = *first;
    *first = *second;
    *second = temp;
}




int main()
{
    int i1 = 1;
    int i2 = 2;
    exchange(&i1, &i2);
    textcout(i1, i2);

    double d1 = 5.1;
    double d2 = 4.7;
    exchange(&d1, &d2);
    textcout(d1, d2);

    char c1 = 'A';
    char c2 = 'B';
    exchange(&c1, &c2);
    textcout(c1, c2);

    return 0;
}   