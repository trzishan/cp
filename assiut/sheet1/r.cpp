#include <iostream>
using namespace std;

int main(){
    int days;
    cin >> days;
    int years = days / 365;
    int months = (days % 365) / 30;
    days = days - (years * 365 + months * 30);
    cout << years << " years\n" << months << " months\n" << days << " days";
}
