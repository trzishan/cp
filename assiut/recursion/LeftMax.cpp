// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Z
// Author: Tahmid Zishan
#include <bits/stdc++.h>
using namespace std;

void leftMax(int *a, int mx, int index, int n)
{
    if (index == n) return;
    if (*(a + index) > mx)
    {
        mx = *(a + index);
    } 
    cout << mx << ' ';
    leftMax(a, mx, index + 1, n);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }

    int mx = *a;
    leftMax(a, mx, 0, n);

}