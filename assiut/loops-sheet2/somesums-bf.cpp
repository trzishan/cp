// Author: Tahmid Zishan
#include <iostream>
using namespace std;

int main()
{
	int n, a, b, sum = 0;
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++) 
	{
		int some = 0, m = i;
		while(m > 0){
			some += m % 10;
			m /= 10;
		}
		if (some >= a && some <= b) sum += some;
	}
	cout << sum;
	return 0;
}
