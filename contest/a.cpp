// Author: Tahmid Zishan
#include <iostream>
using namespace std;
#define nl '\n'

int main()
{
	int t;
	cin >> t;
	// test cases
	for (int i = 0; i < t; i++)
	{
		unsigned int x, y;
		cin >> x >> y;
		(x % 2 == 1 && y % 2 == 1) ? cout << "NO" << nl : cout << "YES" << nl;
	}
	return 0;
}
