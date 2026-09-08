// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
// Author: Tahmid Zishan
#include <iostream>
using namespace std;

void printUpto(int n)
{
    cout << n;
    if ( (n-1) == 0) return;
    else cout << ' ';
    printUpto(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printUpto(n);
    return 0;
}