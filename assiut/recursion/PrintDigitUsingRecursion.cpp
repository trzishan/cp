// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
// Author: Tahmid Zishan
#include <iostream>
using namespace std;

void showDigits(int n)
{
    if (n == 0) return;
    showDigits(n / 10);
    cout << n % 10 << ' ';
}

void solve()
{
    int n;
    cin >> n;
    if (n == 0) cout << 0;
    showDigits(n);
    cout << '\n';
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}