// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q
// Author: Tahmid Zishan

#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    long long subs = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int k = 0;
            for (k = j; k < n; k++)
            {
                if (a[k] < a[max(k - 1, 0)]){
                    k = -1;
                    break;
                }
            }
            if (k != -1) subs++;
        }
    }

    cout << subs << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
