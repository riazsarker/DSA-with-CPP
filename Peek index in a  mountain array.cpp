#include <iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[10] = {1, 23, 4, 5, 67, 8, 654, 43, 54, 32};

    cout << "Index No oF mountain array: " << peakIndexInMountainArray(arr, 10);

    return 0;
}