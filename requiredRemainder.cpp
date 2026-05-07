// https://codeforces.com/problemset/problem/1374/A
// Author: Tahmid Zishan
#include <iostream>
#include <cmath>
using namespace std;
#define nl '\n'

int main()
{	
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		unsgined int x, y, n;
		cin >> x >> y >> n;
		int th = floor(n / x);
		cout << x * th + y << nl;
	}
	return 0;
}
