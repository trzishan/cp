// https://codeforces.com/problemset/problem/2217/B
// Author: Tahmid Zishan
#include <iostream>
#include <cmath>
using namespace std;
#define nl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    short int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int special;
    cin >> special;
    special--;

    int countL = 0, countR = 0, current = arr[special];
    int junk = 0;

    // Left count
    for (int i = 0; i <= special; i++)
    {
        if (arr[i] != current) {
            if (junk == 0) countL++;
            junk++;
        } else {
            junk = 0;
        }


    }

    for (int i = n-1; i >= special; i--)
    {
        if (arr[i] != current) {
            if (junk == 0) countR++;
            junk++;
        } else {
            junk = 0;
        }
    }

    int moves = max(countL, countR);

    cout << moves * 2 << nl;
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
