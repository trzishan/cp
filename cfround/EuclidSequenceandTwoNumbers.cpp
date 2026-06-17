// Author: Tahmid Zishan
#include <bits/stdc++.h>
using namespace std;
#define nl '\n'

int solve()
{
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  sort(arr, arr+n);

  for (int i = 0; i < n - 2; i++)
  {
    //cout << arr[i] << ' ';
    if (arr[i] % arr[i + 1] == arr[i+2])
    {
      cout << arr[i] << ' ' << arr[i+1] << nl;
      return 0;
    }
  }

  cout << -1 << nl;
  return 0;
}

int main()
{
  int t;
  cin >> t;
  while (t--) solve();
	return 0;
}
