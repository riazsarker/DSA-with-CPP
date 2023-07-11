// Bubble sort in C++

#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int arr[], int n)
{

    // loop to access each array element
    for (int i = 1; i < n; i++)
    {

        for (int j = 0; i < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// print array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << "  " << array[i];
    }
    cout << "\n";
}

int main()
{
    int data[] = {-2, 45, 0, 11, -9};

    // find array's length
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    cout << "Sorted Array in Ascending Order:\n";
    printArray(data, size);
}