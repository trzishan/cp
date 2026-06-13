#include <cmath>
#include <iostream>
using namespace std;

int main(){
    float a;
    cin >> a;
    if (a - floor(a) != 0) cout << "float " << floor(a) << " " << a - floor(a);
    else cout << "int " << floor(a);

    return 0;
}
