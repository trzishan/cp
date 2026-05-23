// Author: Tahmid Zishan
#include <iostream>
#define nl '\n'
using namespace std;


int main(){
    int n;
    cin >> n;
    for (int i = 1; i < 13; i++){
        cout << n << " * " << i << " = " << n * i << nl;
    }
    return 0;
}
