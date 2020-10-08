#include <iostream>
using namespace std;

int main() {
  int n, k;
  while (cin >> n >> k) {
    double price = 200;
    int money = n;
    bool affordable = false;
    for (int i = 1; i < 20; i++) {
      if (money >= price) {
        cout << i << endl;
        affordable = true;
        break;
      }
      money += n;
      price *= 1 + k / 100.0;
    }
    if (!affordable) {
      cout << "Impossible" << endl;
    }
  }
  return 0;
}
