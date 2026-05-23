// Author: Tahmid Zishan
#include <algorithm>
#include <iostream>
using namespace std;
#define nl '\n'

int main(){
    int k, s, ans = 0;
    cin >> k >> s;
    // min value is used to lower iteration
    int lim = min(k, s);
    for (int x = 0; x <= lim; x++){
        for (int y = 0; y <= lim; y++){
            // time limit exceeds if we use three nested loops.
            // so, we're using condition here
            // I didn't find any other way to solve this without using loops
            int z = (s - y - x);
            if (k >= z && 0 <= z) ans++;
        }
    }
    cout << ans;
    return 0;
}
