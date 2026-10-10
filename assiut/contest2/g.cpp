// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/G
// Author: Tahmid Zishan
#include <iostream>
using namespace std;

void solve()
{
    long long n;
    long long s;
    cin >> n >> s;

    if (n >= s) cout << s - 1 << ' ' << 1;
    else if (n > s / 2) cout << n << ' ' << s - n;
    else if ((n * (n + 1)) / 2 >= s)
    {
        while (s > n)
        {
            cout << n << ' ';
            s -= n;
            n--;
        }
        cout << s;
    } else cout << -1;

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}