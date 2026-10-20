// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
// Author: Tahmid Zishan

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxops = 2000000000;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int ops = 0;
        while (x % 2 == 0 && x > 0)
        {
            x /= 2;
            ops += 1;
        }

        if (ops < maxops) maxops = ops;
    }

    cout << maxops;
    return 0;
}
