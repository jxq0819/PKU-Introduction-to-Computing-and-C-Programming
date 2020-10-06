#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ones;
  int tens;
  int hundreds;
  hundreds = n / 100;
  tens = (n - 100 * hundreds) / 10;
  ones = n - 100 * hundreds - 10 * tens;
  cout << hundreds << endl;
  cout << tens << endl;
  cout << ones << endl;
  return 0;
}
