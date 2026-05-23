#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    int sorted[3];
    for (int i = 0; i < 3; i++){
        sorted[i] = arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+n);
    for (int lmnt : arr) cout << lmnt << endl;
    cout << endl;
    for(int lmnt : sorted) cout << lmnt << endl;

    return 0;
}
