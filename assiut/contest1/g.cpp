// Author: Tahmid Zishan
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    //eyes, mouths and bodies
    unsigned long long e, m, b, g = 0;
    cin >> e >> m >> b;

    //if there are mouths, make as many gifts as possible with the mouths
    if (e > 0 && m > 0 && b > 0){
        unsigned long long h = min(e, min(m, b));
        g += h;
        e -= h;
        b -= h;
    }

    // now, make gifts only with the eyes
    if (b > 0){
        unsigned long long eyeGift = (e / 2);
        // make sure gifts are made only if enough bodies are available
        g += min(b, eyeGift);
    }
    // cout << "m is " << m;
    cout << g;
    return 0;
}
