// https://codeforces.com/contest/1200/problem/A
// Author: Tahmid Zishan
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int main()
{
	int n, arr[10] = {};
	string s;
	cin >> n;
	cin >> s;
	for (char c : s)
	{
		if (c == 'L')
		{
			for (int i = 0; i < 10; i++)
			{
				if (arr[i] == 0) 
				{
					arr[i] = 1;
					break;
				}
			}
		} else if (c == 'R')
		{
			for (int i = 9; i >= 0; i--)
			{
				if (arr[i] == 0) 
				{
					arr[i] = 1;
					break;
				}
			}
		} else 
		{
			int room = static_cast<int>(c) - 48;
			arr[room] = 0;
		}
	}

	for (int i = 0; i < 10; i++) cout << arr[i];
	cout << nl;
	return 0;
}
