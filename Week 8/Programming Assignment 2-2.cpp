#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    float distance;
    cin >> distance;
    if (distance / 3 + 50 < distance / 1.2) {
      cout << "Bike" << endl;
    }
    else if (distance / 3 + 50 > distance / 1.2) {
      cout << "Walk" << endl;
    }
    else {
      cout << "All" << endl;
    }
  }
  return 0;
}
