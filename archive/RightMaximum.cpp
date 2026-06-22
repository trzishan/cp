// https://codeforces.com/contest/2204/problem/B
// Author: Tahmid Zishan
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{	
	int n, op = 0, k = 0;
	cin >> n;
	// int arr[n];
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a >= k){
			op++;
			k = a;
		}
	}
	
	cout << op << nl;
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
