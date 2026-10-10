// Author: Tahmid Zishan
#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int mem = 0;
    int arrmem[n];
    int k = 0;
    int arrk[n];

    // 1 - scan to the top of mem
    // 2 - 
    // 1. print top, remove from mem, k++, ak += i
    // 2. if size of mem = 0, pass
    // 3 - pass
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            arrmem[mem] = i;
            mem += 1;

        }
        if (s[i] == '2')
        {
            if (mem > 0)
            {
                mem -= 1;
                arrk[k] = i + 1;
                k++;
            }
        }
    }

    cout << k + mem << endl;
    for ()
    
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}