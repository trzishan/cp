// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
// Author: Tahmid Zishan
#include <iostream>
using namespace std;
#define nl '\n'

int reverse(int num)
{	
	int rev = 0;
	while (num > 0)
	{
		int last = num % 10;
		rev = rev * 10 + last;
		num /= 10;
	}
	return rev;
}

int main()
{
	int num;
	cin >> num;
	int rev = reverse(num);
	cout << rev << nl;
	(rev == num) ? cout << "YES" << nl : cout << "NO" << nl;
	return 0;
}
