// Author: Tahmid Zishan
#include <iostream>
using namespace std;

void solve()
{
	string a;
	cin >> a;
	for (int i = a.length() - 1; i >= 0; i--)
	{
		cout << a[i] << ' ';
	}
	cout << '\n';
}

int main()
{
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
