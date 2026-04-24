// Author: Tahmid Zishan
#include <iostream>
using namespace std;

int main(){
	int number_list[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
	int n;
	cin >> n;
	for (int number : number_list){
		if (n == number || n%number == 0){
			cout << "YES";
			return 0;
		}

	}
	
	cout << "NO";
	return 0;
}
