// Author: Tahmid Zishan
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

void solve()
{
  int n;
  cin >> n;
  int rem = n % 12;
  (rem == 10) ? cout << -1 << nl : cout << rem << ' ' << n - rem << nl;
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
	return 0;
}
