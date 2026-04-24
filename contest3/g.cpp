// Author: Tahmid Zishan
#include <iostream>
using namespace std;

int main(){
	int num, ops;
	cin >> num >> ops;
	for (int i = 0; i < ops; i++) (num % 10 == 0) ? num /= 10 : num -= 1;
	cout << num;

	return 0;
}
