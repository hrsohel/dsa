#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Here, we initialize a count variable to 1, because we assume that there is at least one word in the string. Then, we iterate through each character in the string using a range-based for loop. If we encounter a space character, we increment the count variable. Finally, we return the count variable as the number of words in the string.";
    int count = 1;
    for (char it : str)
    {
        if (it == ' ')
            count++;
    }
    cout << count;
}