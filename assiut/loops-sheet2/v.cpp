// Author: Tahmid Zishan
#include <iostream>
using namespace std;
#define nl '\n'

int main(){
	int n;
	cin >> n;
	for (int i = 1; i <= n * 4; i++){
		(i%4 == 0) ? cout << "PUM" << nl : cout << i << ' ';
	}
	return 0;
}
