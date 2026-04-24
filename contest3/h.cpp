// Author: Tahmid Zishan
#include <iostream>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int score{}, kth{}, i = 1;
	while(i <= n){
		cin >> score;
		if (i == k) kth = score;
		if (score < kth) break;
		if (score == 0) break;
		i++;
	}

	cout << i;

	return 0;
}
