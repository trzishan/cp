// Author: Tahmid Zishan
#include <bits/stdc++.h>
#include <string>
using namespace std;
#define nl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    short int arr[n+2];
    for (int i = 1; i < n+2; i++)
    {
        cin >> arr[i];
    }

    int special;
    cin >> special;

    arr[0] = arr[n+1] = arr[special];
    int countL = 0, countR = 0, current = arr[special];

    for (int i = special; i >= 0; i--)
    {
        if (arr[i] != current) countL++;
        current = arr[i];
    }

    for (int i = special; i < n; i++)
    {
        if (arr[i] != current) countR++;
        current = arr[i];
    }

    int moves = max(countL, countR);

    cout << moves << nl;
    return;
}

int main()
{
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
