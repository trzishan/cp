// https://codeforces.com/problemset/problem/1352/C
// Author: Tahmid Zishan

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    long long ndivisible;
    // if all natural numbers were indivisible by k
    // then the kth number would be k
    // k would increment by 1 each time theres a number
    // smaller than or equal to k that is divisible by n
    // for each n - 1 items, theres one item
    // that is divisivle by k
    // ex. if n = 3
    // 1 2 [3] 4 5 [6] 7 8 [9] 10 11 [12]
    // 1 2     3 4     5 6      7  8  9
    // this continues upto k while not exceeding k
    // ex. if k = 3
    // kth = 4, which is 3 + floor (3 / 2)
    // if k = 5, kth = 5 + floor(5 / 2) = 7
    // if k = 6, kth = 6 + floor(6 / 2) = 6 + 3 = 9
    // this creates a problem
    // when k % (n - 1) == 0, the flooring doesnt work
    // if we do (k - 1) / (n - 1) instead, we get
    // kth = 6 + floor(5 / 2) = 6 + 2 = 8
    // if we do k = 5
    // kth = 5 + floor(4 / 2) = 5 + 2 = 7
    // the question is, why do we even floor
    // do we need to? if not, why?
    // its clear now
    // we dont need to floor because we're dealign with the problem
    // k being divisible by (n - 1)
    // if we just dont divide k by (n - 1)
    // but divide (k - 1) instead
    // we dont

    k = k + (k - 1) / (n - 1);

    cout << k << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
