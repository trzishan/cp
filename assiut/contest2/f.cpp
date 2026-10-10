// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F
// Author: Tahmid Zishan
#include <iostream>
using namespace std;

int main()
{
    int n, times = 0;
    cin >> n;

    while (n--)
    {
        int thisTimes = 0;
        long long num;
        cin >> num;
        while (num % 2 == 0)
        {
            thisTimes++;
            num /= 2;
        }

        if (thisTimes > times) times = thisTimes;
    }

    cout << times;
    return 0;
}