https://codeforces.com/contest/1765/problem/E
// Author: Tahmid Zishan
#include <cmath>
#include <iostream>
using namespace std;
#define nl '\n'

void solve()
{
	int n, a, b;
	cin >> n >> a >> b;
	int gain = a - b;
	int coins = 0;

	if (gain > 0)
	{
		cout << 1 << nl;
		return;
	}
	coins = ceil((float)n / a);

	cout << coins << nl;
}

int main()
{
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
