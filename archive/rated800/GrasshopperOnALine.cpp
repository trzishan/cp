// https://codeforces.com/contest/1837/problem/A
// Author: Tahmid Zishan

#include <iostream>
using namespace std;

void solve()
{
    int x, k;
    cin >> x >> k;
    if (x % k == 0)
    {
        cout << 2 << endl;
        cout << x - 1 << ' ' << 1;
    }

    else cout << 1 << endl << x;
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}