#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    bool divisible = false;
    if (n % 3 == 0) {
      cout << 3 << ' ';
      divisible = true;
    }
    if (n % 5 == 0) {
      cout << 5 << ' ';
      divisible = true;
    }
    if (n % 7 == 0) {
      cout << 7;
      divisible = true;
    }
    if (!divisible) {
      cout << 'n';
    }
  }
  return 0;
}
