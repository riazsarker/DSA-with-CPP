#include <iostream>
using namespace std;

int main()
{
    int arr1[100] = {1, 23, 34, 231, 12, 32};

    int arr2[100] = {1, 23, 1, 23, 12, 122};

    int n1 = 6, n2 = 6;

    // printing elements that are common in both the arrays
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }

    return 0;
}