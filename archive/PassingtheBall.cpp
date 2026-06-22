// https://codeforces.com/contest/2204/problem/A
// Author: Tahmid Zishan
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
	int n, i = 0;
	string s;
	cin >> n;
	cin >> s;

	for (char c : s)
	{
		i++;
		if (c == 'L') break;
	}

	cout << i << nl;
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
