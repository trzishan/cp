// Author: Tahmid Zishan
#include <iostream>
#include <string>
using namespace std;

int main()
{	
	string hello = "hello", given;
	cin >> given;
	int i{};

	for(char c : given)
	{	
		if (hello[i] == c) i++;
		if (i == 5)
		{
			cout << "YES"; 
			return 0;
		}
	}

	cout << "NO";
	return 0;
}
