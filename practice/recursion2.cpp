#include <bits/stdc++.h>
using namespace std;

int findOccurence(int arr[], int n, int value, int i)
{
    if (n == 1)
        return -1;
    if (value == arr[0])
        return i;
    findOccurence(arr + 1, n - 1, value, i + 1);
}

int main()
{
    int arr[] = {1, 3, 2, 4, 3, 5, 2};
    findOccurence(arr, 7, 6, 0) == -1 ? cout << "Not found" : cout << "Position: " << findOccurence(arr, 7, 6, 0);
    // cout << "Position: " << findOccurence(arr, 7, 4, 0);
}