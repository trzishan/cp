// https://codeforces.com/problemset/problem/2231/A
// Author: Tahmid Zishan
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
	int n, loopn = 0;
	cin >> n;
	int i = 0, k = 1;
	while (k <= n)
	{
		i++;
		if (i % 3 == 0) continue;
		cout << i << ' ';
		k++;
	}
	cout << nl;
}


int main()
{
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
