// Author: Tahmid Zishan
#include <iostream>
using namespace std;

int main(){
	int k, w;
	long long n, price{};
	cin >> k >> n >> w;
	for (int i = 1; i <= w; i++){
		price += k * i;
	}

	(price > n) ? cout << price - n : cout << 0;
	return 0;
}
