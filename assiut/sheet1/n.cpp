#include <iostream>
using namespace std;

int main() {
  char op;
  int a, b;
  cin >> a >> op >> b;

  if (op == '+') cout << a + b;
  else if (op == '-') cout << a - b;
  else if (op == '*') cout << a * b;
  else if (op == '/') cout << a / b;
  return 0;
}
