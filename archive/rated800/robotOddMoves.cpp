// https://codeforces.com/problemset/problem/2271/A
// Author: Tahmid Zishan
#include <iostream>
#include <stdlib.h>
using namespace std;

int solve()
{
    int x, y;
    cin >> x >> y;

    int diff = (x - y);
    if (diff == 0) return x;
    if (diff < -1) return -1;
    if (diff % 2 == 0) return x;
    else return x + 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--) cout << solve() << endl;
    return 0;
}
