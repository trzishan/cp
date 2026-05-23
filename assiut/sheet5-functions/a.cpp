// Author: Tahmid Zishan
#include <iostream>
using namespace std;

int add(unsigned int a, unsigned int b){
    return a + b;
}

int main(){
    unsigned int a, b;
    cin >> a >> b;
    cout << add(a, b);
    return 0;
}
