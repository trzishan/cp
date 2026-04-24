// Author: Tahmid Zishan
#include <cmath>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if (n%5 == 0) cout << n/5;
	else {
		cout << floor(n/5) + 1;	
	}

	return 0;
}
