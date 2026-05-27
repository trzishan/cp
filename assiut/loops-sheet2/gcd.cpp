// Author: Tahmid Zishan
#include <iostream>
using namespace std;

int main()
{
	int a, b, mx, mn, rem = 0;
	cin >> a >> b;
	mx = max(a, b);
	mn = min(a, b);
	while(1)
	{
		rem = mx % mn;
		if (rem == 0) break;
		mx = mn;
		mn = rem;
	}
	cout << mn;
	return 0;
}
