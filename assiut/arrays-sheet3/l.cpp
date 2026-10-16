// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L
// Author: Tahmid Zishan

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];


    /*
     * 0
     * 0 1
     * 0 1 2
     * 0 1 2 3
     *   1
     *   1 2
     *   1 2 3
     *     2
     *     2 3
     *       3
     */
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int mx = a[i];
            for (int k = i; k <= j; k++)
            {
                if (a[k] > mx) mx = a[k];
            }

            cout << mx << ' ';
        }
    }
    cout << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
