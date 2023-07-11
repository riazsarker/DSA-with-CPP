#include <iostream>

using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int a[50], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int uniqueNumber = findUnique(a, n);

    cout << uniqueNumber << endl;
    return 0;
}