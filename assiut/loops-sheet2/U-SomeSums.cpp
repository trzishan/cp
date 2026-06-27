// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U
// Author: Tahmid Zishan
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	
	int a, b, n, sum = 0;
	cin >> n >> a >> b;
	for (int i = 0; i <= n; i++)
	{
		int digitSum = 0, j = i;
		while(j)
		{
			digitSum += j % 10;
			j /= 10;
		}

		if (digitSum >= a && digitSum <= b) sum += i;	
	}

	cout << sum;

	return 0;
}
