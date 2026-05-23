#include <cmath>
#include <iostream>
using namespace std;

int main(){
    long double a, b, c, d;
    cin >> a >> b >> c >> d;

    if (pow(a, (b/d)) > c) cout <<  "YES";
    else cout << "NO";

    return 0;
}
