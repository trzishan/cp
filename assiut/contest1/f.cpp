// Author: Tahmid Zishan
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    // look closely, the bits are being added by XOR
    cout << (a ^ b);
    return 0;
}
