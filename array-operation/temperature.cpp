#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, dup, temp, i = 0;
    cout << "Enter the array size: ";
    cin >> num;
    dup = num;
    int arr[num];
    while (num--)
    {
        cout << "Array[" << i << "]: ";
        cin >> temp;
        if (temp > 0)
        {
            arr[i] = temp;
            i++;
        }
    }
    cout << endl;
    int j = 0;
    while (j < i)
    {
        cout << "Array[" << j << "]: " << arr[j] << endl;
        j++;
    }
    cout << endl;
}