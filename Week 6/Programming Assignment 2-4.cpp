#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int a[6];
  for (int i = 0; i < 6; i++) {
    cin >> a[i];
  }
  int max_odd = 1;
  int min_even = 100;
  for (int i = 0; i < 6; i++) {
    if (a[i] % 2 != 0 && a[i] > max_odd) {
      max_odd = a[i];
    }
    if (a[i] % 2 == 0 && a[i] < min_even) {
      min_even = a[i];
    }
  }
  cout << abs(max_odd - min_even) << endl;
  return 0;
}
