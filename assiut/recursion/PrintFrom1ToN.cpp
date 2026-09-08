// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B
// Author: Tahmid Zishan
#include <iostream>
using namespace std;

void printUpto(int n)
{
    if (n == 0) return;
    printUpto(n - 1);
    cout << n  << endl;
}

int main()
{
    int n;
    cin >> n;
    printUpto(n);
    return 0;
}