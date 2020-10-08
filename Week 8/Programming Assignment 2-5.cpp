#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 10; i < n; i++) {
    int num = i;
    int sum = 0;
    while (num > 0) {
      sum += num % 10;
      num /= 10;
    }
    if (i % sum == 0) {
      cout << i << endl;
    }
  }
  return 0;
}
