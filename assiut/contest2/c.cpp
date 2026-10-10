// Author: Tahmid Zishan
#include <iostream>
using namespace std;
#define nl '\n'

int main(){
    int n, l;
    cin >> n >> l;
    
    int min = 1000000000;
    int l_count = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < min) min = x;
        l_count++;
        if (l_count == l || i == (n - 1))
        {
            cout << min << ' ';
            min = 1000000000;
            l_count = 0;
        }

    }
    return 0;
}
