// Author: Tahmid Zishan
#include <iostream>
using namespace std;
#define nl '\n'

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int k;
		cin >> k;
		while (k > 0)
		{
			cout << k % 10 << ' ';
			k /= 10;
		}
		cout << nl;
	}
	return 0;
}
