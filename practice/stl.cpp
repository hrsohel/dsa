#include <bits/stdc++.h>
using namespace std;

void display(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    // vector<int>::iterator it;
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    display(v);
    sort(v.begin(), v.end());
    display(v);
    cout << "Auto iterator" << endl;
    for (auto it : v)
        cout << it << " ";
}