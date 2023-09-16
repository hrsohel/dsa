#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

double factorial(int n)
{
    return exp(lgamma(n + 1));
}

int main()
{
    int n;
    cout << "Enter a number to calculate its factorial: ";
    cin >> n;
    auto start = high_resolution_clock::now();
    cout << "Factorial of " << n << " is: "
         << factorial(n) << endl;
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(end - start);
    cout << "Time: " << duration.count();
    return 0;
}