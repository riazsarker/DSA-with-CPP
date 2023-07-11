 #include <iostream>
#include <array>
using namespace std;

int main()
{
    int basic[3] = {1, 2, 3};
    array<int, 4> a = {1, 23, 4, 5};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    cout << "Eleent at 2nd Index" << a.at(2) << endl;
}
