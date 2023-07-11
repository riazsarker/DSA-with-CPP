#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlernate(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{

    int even[8] = {5, 2, 9, 4, 5, 8, 1, 3};
    int odd[5] = {11, 33, 22, 55, 66};
    swapAlernate(even, 8);
    swapAlernate(odd, 5);

    printArray(even, 8);
    printArray(odd, 5);
    return 0;
}