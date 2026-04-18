// https://codeforces.com/problemset/problem/1368/A
// Author: Tahmid Zishan
#include <algorithm>
#include <iostream>
using namespace std;
#define nl '\n'

int main(){
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		unsigned int a, b, n, count{};
		cin >> a >> b >> n;
		unsigned int mx = max(a, b), mn = min(a, b);
		int j = 0;
		while (true){
			(j % 2 == 0) ? mn += mx : mx += mn;
			count++;
			if (mn > n) break;
			j++;
		}
		cout << count << nl;
	}
}
