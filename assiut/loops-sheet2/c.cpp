// Author: Tahmid Zishan
#include <iostream>
using namespace std;
#define newline '\n'

int main(){
    int n, positive = 0, negative = 0, odd = 0, even = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int s;
        cin >> s;
        (s % 2 == 0) ? even++ : odd++;
        if (s > 0) positive++;
        else if (s < 0) negative++;
    }
    cout << "Even: " << even << newline;
    cout << "Odd: " << odd << newline;
    cout << "Positive: " << positive << newline;
    cout << "Negative: " << negative << newline;
    return 0;
}
