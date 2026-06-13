#include <iostream>
using namespace std;

int main() {
  char ch;
  cin >> ch;
  int input = ch;

  if (input >= 48 && input <= 57)
    cout << "IS DIGIT";
  else if (input >= 65 && input <= 90)
    cout << "ALPHA\nIS CAPITAL";
  else if (input >= 97 && input <= 122)
    cout << "ALPHA\nIS SMALL";
  return 0;
}
