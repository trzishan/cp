// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
// Author: Tahmid Zishan

#include <iostream>
using namespace std;

long long fib(int n)
{
    long long f = 1;
    long long prev = 1;
    for (int i = 0; i <= n; i++)
    {
        if (i == 0) f = 0, prev = 0;
        if (i == 1) f = 0, prev = 0;
        if (i == 2) f = 1, prev = 0;
        if (i > 2)
        {
            f = f + prev;
            prev = f - prev;
        }
    }
    return f;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}
