// https://codeforces.com/contest/2276/problem/A
// Author: Tahmid Zishan
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c, s;
        cin >> c >> s;
        if (c > s)
        {
            // The problem states that number of cheese should be strictly greater
            // than number of sausages. so, if cheese is twice as sausage or more,
            // we can make sausage number of sandwiches. or else, we'll have to make
            // only that ammount of sandwiches as long as cheese is twice as sausage
            // if cheese is twice or more, sandwiches = sausage
            // else sandwich = as many cheese left after making sandwich with one cheese slice
            cout << min(s, c - s);
        }
        else cout << -1;
        cout << endl;
    }

    return 0;
}
