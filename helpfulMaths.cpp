// Author: Tahmid Zishan
#include <iostream>

int main()
{
	string s;
	int ones = 0, twos = 0, threes = 0;
	cin >> s;
	for (char c : s)
	{
		if (c == '1') ones++;
		else if (c == '2') twos++;
		else if (c == '3') threes++;

	}

	for (int i = 0; i < (ones+twos+threes); i++)
	{
		
	}
	return 0;
}
