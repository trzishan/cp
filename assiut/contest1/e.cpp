#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (a + b != 0 && (a == b || a - b == 1 || b - a == 1)) cout << "YES";
    else cout << "NO";
    return 0;
}
