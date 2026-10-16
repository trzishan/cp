// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
// Author: Tahmid Zishan
#include <iostream>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    int a[n];
    a[0] = 10000000;
    int mn = a[0];
    int mn_index = 0;
    int sec_mn = a[0];
    int sec_mn_index;
    for (int i = 0; i < n; i++)
    {
        // we have to make sure that we're mot bulkin up on index to cut down on value

        cin >> a[i];
        if (a[i] < i) continue;
        if (a[i] < mn)
        {
            mn = a[i];
            mn_index = i;
        }
        if (a[i] < sec_mn && a[i] > mn)
        {
            sec_mn = a[i];
            sec_mn_index = i;

        }
    }

    // sum = ai + aj + j - i
    // sum = min + second-min - min(i, j) + max(i, j)
    int sum = mn + sec_mn - min(mn_index + 1, sec_mn_index + 1) + max(mn_index + 1, sec_mn_index + 1);
    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
