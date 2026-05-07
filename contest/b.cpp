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
		int firsts = 0, seconds = 0, l;
		cin >> l;
		for (int i = 0; i < l; i++)
		{
			char c;
			cin >> c;
			(c == '(') ? firsts++ : seconds++;

		}
		(firsts == seconds) ? cout << "YES" << nl : cout << "NO" << nl;
	}
	return 0;
}
