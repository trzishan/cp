// https://codeforces.com/problemset/problem/472/A
// Author: Tahmid Zishan
#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int n){
	for (int i = 2; i <= sqrt(n); i++){
		if ( n % i == 0) return false;
	}
	return true;
}

void until(int m, int x){
	if (isPrime(m) || isPrime(x)){
		m -= 1;
		x += 1;
		until(m, x);
	} else cout << m << ' ' << x;
}

int main(){
	int n;
	cin >> n;
	int m = ceil((float)n/2), x = floor((float)n/2);
	until(m, x);

	return 0;
}
