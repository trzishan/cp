// https://codeforces.com/contest/405/problem/A
// Author: Tahmid Zishan
#include <iostream>
using namespace std;
#define nl '\n'

void sort(int arr[], int size);

int main()
{
	int size;
	cin >> size;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
		
	sort(arr, size);

	for (int lmnt : arr)
	{
		cout << lmnt << ' ';;
	}
	return 0;
}

void sort(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
