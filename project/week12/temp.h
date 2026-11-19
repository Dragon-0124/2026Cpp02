#pragma once
#include <iostream>
using namespace std;

template <typename T>
T smallest(const T& first, const T& second)
{
    if (first < second)
    {
        return first;
    }
    return second;
}

// 탬플릿 오버로딩을 통해 서로 다른 2개의 함수를 부르는 것이므로 재귀함수가 아니다
template <typename T>
T smallest(const T& first, const T& second, const T& third)
{
    return smallest(smallest(first, second), third);
}

template <typename C>
void smallc(C first, C second, C third)
{
    cout << "smallest(" << first << "," << second << "," << third << ") = " << smallest(first, second, third) << endl;
}