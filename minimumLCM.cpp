// https://codeforces.com/problemset/problem/1765/M
// Author: Tahmid Zishan
#include <iostream>
using namespace std;
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    int x = n / 2, y;
    y = n - x;
    while (x % y != 0 && x <= n / 2)
    {
        x += 1;
        y -= 1;
    }

    cout << x << ' ' << y << nl;
    return;
}

int main()
{
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
