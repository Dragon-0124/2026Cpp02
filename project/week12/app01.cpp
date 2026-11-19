#include <iostream>
using namespace std;

// 템플릿 함수 정의
template <typename T>
T smaller(T first, T second)
{
    cout << static_cast<int>(first) << '\n'; // 모던 스타일 C++ 형변환
    cout << (int)second << '\n';

    if (first < second)
    {
        return first;
    }
    return second;
}

int main()
{
    cout << "a와 B 중에 작은 것 = " << smaller('a', 'B') << endl;
    cout << "12와 15 중에 작은 것 = " << smaller(12, 15) << endl;
    cout << "44.2와 33.1 중에 작은 것 = " << smaller(44.2, 33.1) << endl;
    return 0;
} 