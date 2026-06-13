#include <iostream>
using namespace std;

int main(){
    char ch;
    cin >> ch;
    // int lint = (int) ((ch + 1) % 26);
    // char l = lint;
    // cout << ch + 1 << endl;
    char bruh = (ch + 1) ;
    if (bruh > 'z') {
        cout << 'a';
        return 0;
    }
    cout << bruh;

    return 0;
}
