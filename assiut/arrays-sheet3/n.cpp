// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
// Author: Tahmid Zishan

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    char s[a+b+1];
    for (int i = 0; i < a+b+1; i++)
    {
        cin >> s[i];
        if (!(s[i] >= '0' && s[i] <= '9') && (i != a))
        {
            cout << "No";
            return 0;
        }

        if (i == a && s[i] != '-')
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
