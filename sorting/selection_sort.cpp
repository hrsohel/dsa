#include <bits/stdc++.h>
using namespace std;
vector<int> v;

int findMin(int index)
{
    int minIndex = index;
    for (int i = index; i < v.size(); i++)
    {
        if (v[i] < v[minIndex])
            minIndex = i;
    }
    return minIndex;
}

void selectionSort()
{
    int minIndex, temp;
    for (int i = 0; i < v.size(); i++)
    {
        minIndex = findMin(i);
        temp = v[i];
        v[i] = v[minIndex];
        v[minIndex] = temp;
    }
}

int main()
{
    v = {5, 7, 1, 6, 3, 1, 8, 9};
    selectionSort();
    for (auto it : v)
        cout << it << " ";
}