// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
// Author: Tahmid Zishan

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    cin >> a[0];
    int mx = a[0], mn = a[0], max_index = 0, min_index = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)
        {
            mx = a[i];
            max_index = i;
        }
        if (a[i] < mn)
        {
            mn = a[i];
            min_index = i;
        }
    }

    a[max_index] = mn;
    a[min_index] = mx;

    for (int x : a) cout << x << ' ';
    return 0;
}
