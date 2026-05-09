// Author: Tahmid Zishan
#include <iostream>
#include <algorithm>
using namespace std;
#define nl '\n'

void solve()
{
	int n, k, k_left;
		long long c;
		cin >> n >> c >> k;
		if (k >= n) k_left = (k - n);
		int arr[n];
		for (int i = 0; i < n; i++) cin >> arr[i];
		sort(arr, arr + n);
		for (int lmnt : arr) cout << lmnt << ' ';
		for (int pow : arr)
		{	
			if (k == 0) break;
			if (c >= pow)
			{
				int diff = (c - pow);
				(if diff <= k) k_left -= diff; 
				pow = pow + diff;
				c = c + pow;
				cout << "k left: " << k_left << nl;
			} 
			else break;
			k--;
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
