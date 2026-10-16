// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
// Author: Tahmid Zishan

#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b;
    string code;
    cin >> a >> b >> code;
    int cl = code.length();
    // cout << code.length();
    if (cl == a + b + 1){
        for (int i = 0; i < cl; i++){
            if (i == a && code[i] != '-'){
                cout << "No";
                return 0;
            } else if (i == a) continue;

            int ch = code[i];
            if (ch > 47 && ch < 58) continue;
            else {
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    return 0;
}
