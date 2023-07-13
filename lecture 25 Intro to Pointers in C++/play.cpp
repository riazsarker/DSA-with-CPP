#include <iostream>
using namespace std;

int main()
{

    // int i = 5;
    // int *p = &i;

    // cout << p << endl;
    // cout << *p << endl;

    int num = 5;

    int *p0 = &num;
    cout << "before " << num << endl;
    (*p0)++;
    cout << "after " << num << endl;

    // important conceept
    int i = 3;
    int *t = &i;
    cout << (*t)++ << endl;

    cout << "before t" << t << endl;
    t = t + 1;
    cout << "after t" << t << endl;
    char s[] = "hello";
    char *p = s;
    cout << s[0] << " " << p[0];
    return 0;
}