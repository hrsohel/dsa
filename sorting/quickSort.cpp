#include <iostream>
#include <vector>

using namespace std;

void quicksort(vector<int> &arr, int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int pivot = arr[(left + right) / 2];
    int i = left, j = right;

    while (i <= j)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    quicksort(arr, left, j);
    quicksort(arr, i, right);
}

int main()
{
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (auto it : arr)
        cout << it << " ";
    cout << endl;

    return 0;
}