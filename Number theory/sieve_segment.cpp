#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r, index = 0, iprime = 0, prime, i, j;
    cout << "Enter the Low" << endl;
    cin >> l;
    cout << "Enter the Right" << endl;
    cin >> r;
    int size_of_arr = sqrt(r);
    int size_of_arr2 = r - l + 1;
    int arr[size_of_arr];
    int arr2[size_of_arr2];
    for (i = 2; i <= sqrt(r); i++)
    {
        if (i == 2 || i == 3)
        {
            arr[index] = i;
            index++;
        }
        else if (i % 2 != 0)
        {
            for (int j = 3; j <= sqrt(i); j += 2)
            {
                iprime = 0;
                if (i % j == 0)
                {
                    iprime = 1;
                    break;
                }
            }
            if (iprime == 0)
            {
                arr[index] = i;
                index++;
            }
        }
    }
    for (i = l; i <= r; i++)
    {
        iprime = 0;
        for (j = 0; j < index; j++)
        {
            if (i % arr[j] == 0)
            {
                iprime = 1;
                break;
            }
        }
        if (iprime == 0)
            cout << i << " ";
    }
}