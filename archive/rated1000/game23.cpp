// https://codeforces.com/contest/1141/problem/A
// Author: Tahmid Zishan
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int stepOG = m / n;
    if (m % n != 0)
    {
        cout << -1;
        return 0;
    }

    int steps = 0;
    while ((stepOG % 3 == 0) && (stepOG > 0))
    {
        stepOG /= 3;
        steps += 1;
    }

    while ((stepOG % 2 == 0) && (stepOG > 0))
    {
        stepOG /= 2;
        steps += 1;
    }

    // after dividing the stepOG by 2 and 3, if stepOG != 1
    // then n * 2^x * 3^y will not make m
    // because, theres something more there to multiply n by

    if (stepOG != 1) steps = -1;

    cout << steps;
    return 0;
}
