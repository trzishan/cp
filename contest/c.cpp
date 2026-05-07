// Author: Tahmid Zishan
#include <algorithm>
#include <iostream>
using namespace std;
#define nl '\n'

int main()
{
	int t;
	cin >> t;
	// test cases
	for (int i = 0; i < t; i++)
	{	
		int size;
		cin >> size;
		long long arr[size];
		for (int i = 0; i < size; i++) cin >> arr[i];
		for (int i = 0; i < size; i++)
		{
			if (arr[i] % 6 != 0) swap(arr[i], arr[(size - i)]);
		}
		
		for(int num : arr) cout << num << ' ';
		cout << nl;
	}
	return 0;
}
