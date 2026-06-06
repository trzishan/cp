https://codeforces.com/contest/1850/problem/A
// Author: Tahmid Zishan
#include <iostream>
using namespace std;

void solve()
{
	short int a, b, c;
	cin >> a >> b >> c;
	(a + b >= 10 || b + c >= 10 || c + a >= 10) ? cout << "YES" : cout << "NO";
	cout << '\n';
}

int main()
{
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
