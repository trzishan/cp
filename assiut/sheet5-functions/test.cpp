// Author: Tahmid Zishan
#include <iostream>
using namespace std;

void print(const int& n){
    for (int i = 1; i < n; i++){
        cout << i << " ";
    }
}

int main(){
    int n;
    cin >> n;
    print(n);
    cout << n;
    return 0;
}
