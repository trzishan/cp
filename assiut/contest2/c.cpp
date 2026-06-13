// Author: Tahmid Zishan
#include <cmath>
#include <iostream>
using namespace std;
#define nl '\n'

int main(){
    int n, l;
    cin >> n >> l;
    for (int i = 0; i < ceil(n / l); i++){
        int min = 1000000000;
        for (int j = 0; j < l; j++){
            int x; // = 1000000000;
            cin >> x;
            if (x < min) min = x;
        }
        cout << min << ' ';
    }
    return 0;
}
