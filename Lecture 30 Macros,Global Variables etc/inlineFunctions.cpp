#include <iostream>
using namespace std;

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}

int main()
{

    int a = 1, b = 2;
    int ans = 0;
    ans = getMax(a, b);
    a = a + 2;
    b = b + 1;
    ans = getMax(a, b);
    return 0;
}