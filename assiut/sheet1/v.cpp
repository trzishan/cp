#include <iostream>
using namespace std;

int main(){
    int a, b;
    char o;

    cin >> a >> o >> b;
    if (o == '>' && a > b) cout << "Right";
    else if (o == '<' && a < b) cout << "Right";
    else if(o == '=' && a == b) cout << "Right";
    else cout << "Wrong";

    return 0;
}
