// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N
// Author: Tahmid Zishan
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	
	char sign;
	cin >> sign;
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		for (int j = 0; j < arr[i]; j++)
		{
			cout << sign;
		}
		cout << nl;
	}

	return 0;
}
