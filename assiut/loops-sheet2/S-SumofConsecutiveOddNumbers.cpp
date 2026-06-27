// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
// Author: Tahmid Zishan
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{	
	int x, y, sum = 0;
	cin >> x >> y;
	int mx = max(x, y), mn = min(x, y);
	for (int i = mn + 1; i < mx; i++)
	{
		if (i % 2 == 1) sum += i;
	}

	cout << sum << nl;
	return;
}

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
