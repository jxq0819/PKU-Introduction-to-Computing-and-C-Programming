#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n;
  cin >> k;
  int a[100] = { 0 };
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < k; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j + 1];
        a[j + 1] = a[j];
        a[j] = temp;
      }
    }
  }
  cout << a[n - k] << endl;
}
