#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool arr[n] = {};
	for (int i = 2; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (j % i == 0) arr[j] = 1;
		}
	}

	for (int i = 2; i < n; i++)
	{
		if (arr[i] == 0) cout << arr[i] << ' ';
	}
	return 0;
}
