// https://codeforces.com/contest/2209/problem/A
// Author: Tahmid Zishan
#include <iostream>
#include <algorithm>
using namespace std;
#define nl '\n'

void solve()
{
		int n, k_left;
		long long c;
		cin >> n >> c >> k_left;
		int arr[n];
		for (int i = 0; i < n; i++) cin >> arr[i];
		sort(arr, arr + n);
		for (int pow : arr)
		{	
			if (c >= pow)
			{
				long long diff = min(1ll * k_left, (c - pow));
				k_left -= diff; 
				pow = pow + diff;
				c = c + pow;
			} 
			else break;
		}
		cout << c << nl;
}

int main()
{
	int t;
	cin >> t;
	// test cases
	while (t--) solve();
	return 0;
}
