// https://codeforces.com/problemset/problem/59/A
// Author: Tahmid Zishan
#include <iostream>
#include <string>
using namespace std;
#define nl '\n'

int main()
{
	int higher = 0, lower = 0;
	string s;
	cin >> s;
	int len = s.length();

	for (char c : s)
	{
		(c >= 'a') ? lower++ : higher++;
	}

	if (higher > lower)
	{
		for (int i = 0; i < len; i++)
		{
			if (s[i] >= 'a') s[i] -= 32;
		}
	} else 
	{
		
		for (int i = 0; i < len; i++)
		{
			if (s[i] < 'a') s[i] += 32;
		}

	}

	// cout << lower << ' ' << higher << nl;
	cout << s;
	return 0;
}
