#include <iostream>
using namespace std;

int main(){
    int a, b, r;
    char o, eq;

    cin >> a >> o >> b >> eq >> r;
    if (o == '+'){
        if (a + b == r) cout << "Yes";
        else cout << a + b;
    } else if (o == '-'){
        if (a - b == r) cout << "Yes";
        else cout << a - b;
    } else if (o == '*'){
        if (a * b == r) cout << "Yes";
        else cout << a * b;
    }
    return 0;
}
