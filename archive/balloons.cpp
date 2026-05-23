// https://codeforces.com/problemset/problem/1703/B
// Author: Tahmid Zishan
#include <iostream>
#include <string>
using namespace std;


void solve()
{
	int l, bc = 0;
	cin >> l;
	string b;
	cin >> b;
	string arr = "QWERTYUIOPASDFGHJKLZXCVBNM";

	for (char sub : arr)
	{	
		if (b.contains(sub)) bc++;
	}

	bc += l;
	cout << bc << endl;
}

int main()
{	
	int t;
	cin >> t;
	while(t--) solve();
	return 0;
}
