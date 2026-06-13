// Author: Tahmid Zishan
#include <iostream>
using namespace std;
#define newline '\n'

int main(){
    int pass = 0;
    while (pass != 1999){
        cin >> pass;
        if (pass == 1999){
            cout << "Correct" << newline ;
            return 0;
        }
        else cout << "Wrong" << newline;
    }
}
