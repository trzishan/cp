// https://codeforces.com/problemset/problem/2276/B
// Author: Tahmid Zishan
#include <string>
#include <iostream>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int obtained = 1;
    for (int i = 1; i < (s.length() - 1); i++)
    {
        if (s[i] == s[i+1] && s[i] == s[i-1]) obtained++;
    }

    cout << obtained << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
}
