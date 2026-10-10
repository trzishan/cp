// Author: Tahmid Zishan
#include <iostream>
using namespace std;

void solve()
{
    int a, b, r;
    cin >> a >> b >> r;

    cout << a << ' ' << b+r << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}