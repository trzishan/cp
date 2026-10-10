// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E
// Author: Tahmid Zishan
#include <iostream>
using namespace std;

int main()
{
    long long row, col, n;
    cin >> n;

    row = n / 4;
    if (row % 2 == 0) col = n % 4;
    else col = abs(n % 4 - 3);

    cout << row << ' ' << col;
}