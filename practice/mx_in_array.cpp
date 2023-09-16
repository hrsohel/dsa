#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Array[" << i << "]: ";
        cin >> arr[i];
    }
    int max = arr[0], second_max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Max element: " << max << endl;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > second_max && arr[i] < max)
            second_max = arr[i];
    }
    cout << "Second max: " << second_max << endl;
}