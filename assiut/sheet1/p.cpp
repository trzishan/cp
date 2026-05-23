#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int first_stat = (num / 1000) % 2;
    if (first_stat == 1) cout << "ODD";
    else cout << "EVEN";
    return 0;
}
