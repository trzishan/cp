// Author: Tahmid Zishan
#include <iostream>
using namespace std;

long long factorial(int n);

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        cout << factorial(n) << endl;
    }
    return 0;
}

long long factorial(int n){
    unsigned long long result = 1;
    // base case
    if (n < 1) return result;
    // recursive call
    result = n * factorial(n - 1);
    return result;
}
