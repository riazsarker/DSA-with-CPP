#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {1, 234, 5344, 3, 24, 324, 34};

    cout << "Enter the key you want to search" << endl;
    int key;
    cin >> key;
    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "key is present";
    }
    else
    {
        cout << "key is not present";
    }

    return 0;
}