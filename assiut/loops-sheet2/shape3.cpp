// Author: Tahmid Zishan
#include <iostream>
#include <string>
using namespace std;
#define nl '\n'
 
int main(){
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        for (int p = (t - i); p > 0; p--) cout << ' ';
        for (int j = 1; j <= i * 2 - 1; j++) cout << '*';
        cout << nl;
    }
    for (int i = 1; i <= t; i++)
    {
        for (int k = t - i + 1; k < t; k++) cout << ' ';
        for (int j = t * 2 - i * 2 + 1; j >= 1; j--) cout << '*';
        cout << nl;
    }
    
    return 0;
}
