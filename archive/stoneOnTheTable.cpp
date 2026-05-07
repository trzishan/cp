// https://codeforces.com/problemset/problem/266/A
// Author: Tahmid Zishan
#include <iostream>
using namespace std;
#define nl '\n'

int main()
{
	int n, removes = 0;
	string s;
	cin >> n;
	cin >> s;
	char x = 'x';
	for (char c : s)
	{
		if (c == x) removes++;
		x = c;
	}
	cout << removes << nl;
	return 0;
}
