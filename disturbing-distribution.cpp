// https://codeforces.com/contest/2226/problem/A
// Author: Tahmid Zishan
#include <iostream>
using namespace std;
#define nl '\n'

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n, nofn = 0, ans = 0;
		cin >> n;
		int arr[n];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
			if (arr[j] == 1) nofn++;
			else ans += arr[j];
		}

		if (nofn == n) cout << 1 << nl;
		else if (nofn % 2 == 0 || nofn == 1) cout << ans << nl;
		else cout << ans + 1 << nl;
	}
	return 0;
}
