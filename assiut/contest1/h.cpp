// Author: Tahmid Zishan
#include <iostream>
using namespace std;

int main(){
    unsigned long long n, k, a;
    cin >> n >> k >> a;

    // if there's a remainder for either n or k, the result should be a float (double)
    if (((n % a) * (k % a)) % a) cout << "double";
    // if its not a double, its either int or long long
    else if ((n * k) / a > 2147483647) cout << "long long";
    else cout << "int";
    return 0;
}
