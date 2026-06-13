// Author: Tahmid Zishan
#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int b = a / 10;
    int c = a % 10;

    if (b == 0 || c == 0){
        cout << "YES";
        return 0;
    }
    else if (b % c == 0){
        cout << "YES";
        return 0;
    } else if (c % b == 0) {
        cout << "YES";
        return 0;
    } else cout << "NO";

    return 0;
}
