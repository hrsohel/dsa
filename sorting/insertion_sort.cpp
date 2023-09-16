#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int key, j;
    for (int i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {5, 7, 3, 1, 6};
    insertionSort(arr, 5);
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}