// https://codeforces.com/contest/2203/problem/B
// Author: Tahmid Zishan

#include <iostream>
using namespace std;
#define nl '\n'

int main(){
	int t;
	cin >> t;
	string num;
	for (int i = 0; i < t; i++){
		cin >> num;
	}
	cout << num[1];
	return 0;
}

// a digit it beautiful if the sum of digits is 
// equal to the sum of digits of sum of digits
//
// f(f(x) == f(x)
// it is natural when f(x) is single digit
// to make that happen, we have to eliminate the largest digits first
//
