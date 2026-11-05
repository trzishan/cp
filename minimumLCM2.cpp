// https://codeforces.com/problemset/problem/1765/M
// Author: Tahmid Zishan
#include <cmath>
#include <iostream>
using namespace std;
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    int a = 1;

    // a + b = n
    // something * x + something * y = n
    // something * (x + y) = n
    // so, the something we're trying to find
    // is the gcd of a and b
    // and x and y are two different integers
    // that has no common factors
    //  
    // now, lcm of a, b = a * b / gcd (a, b)
    // to make the lcm minimim, we must maximize gcd
    //
    for (int g = 2; g * g <= n; ++g)
    {
        if (n % g == 0)
        {
            a = n / g;
            break;
        }
    }

    cout << a << ' ' << n - a << nl;
    return;
}

int main()
{
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
