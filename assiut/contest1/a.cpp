#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main(){
    float d, s;
    cin >> d >> s;
    cout << fixed << setprecision(2) << (100*s)/(100-d);
    // cout << "Zishan";
    return 0;
}
