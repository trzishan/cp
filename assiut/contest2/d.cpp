// Author: Tahmid Zishan
#include <iostream>
#include <cmath>
using namespace std;
#define nl '\n'

void solve()
{
    long long m, n;
    cin >> m >> n;
    long long l = min(m, n);
    long long r = max(m, n);

    unsigned long long sum = ((r + 1) * r) / 2 - ((l - 1) * l) / 2;
    cout << sum << nl;
}

int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
