// Author: Tahmid Zishan
#include <iostream>
using namespace std;
#define nl '\n'

void solve()
{
    string s;
    cin >> s;
    int toRemove = 0;
    int odds = 0;
    for (char &c : s)
    {
        if (c == '4') toRemove++;
        else if (c == '1' || c == '3') odds++;
        else
        {
            if (odds)
            {
                odds--;
                toRemove++;
            }
        }

    }
    cout << toRemove << nl;
}


int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
