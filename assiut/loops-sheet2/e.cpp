// Author: Tahmid Zishan
#include <iostream>
using namespace std;

int main(){
    int n, max = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int s;
        cin >> s;
        if (s > max) max = s;
    }
    cout << max;
    return 0;
}
