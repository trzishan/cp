// Author: Tahmid Zishan
#include <iostream>
using namespace std;
 
int main(){
	int k, steps;
	for (int i{}; i < 5; i++)
	{
        	for (int j{}; j < 5; j++)
        	{
			cin >> k;
			if (k == 1) steps = abs(i - 2) + abs(j - 2);
        	}
	}
	cout << steps << endl;
	return 0;
}
