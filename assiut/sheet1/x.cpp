// Author: Tahmid Zishan
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    int a = max(a1, a2);
    int b = min(b1, b2);
    if (b - a >= 0) cout << a << ' ' << b;
    else cout << -1;
    return 0;
}
