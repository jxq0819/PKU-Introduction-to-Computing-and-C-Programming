#include <iostream>
using namespace std;

int main() {
  int a, b;
  char operation;
  cin >> a >> b >> operation;
  int result;
  switch (operation) {
  case '+':
    result = a + b;
    break;
  case '-':
    result = a - b;
    break;
  case '*':
    result = a * b;
    break;
  case '/':
    if (b == 0) {
      cout << "Divided by zero!" << endl;
      return 0;
    } else {
      result = a / b;
    }
    break;
  default:
    cout << "Invalid operator!" << endl;
    return 0;
  }
  cout << result << endl;
  return 0;
}
