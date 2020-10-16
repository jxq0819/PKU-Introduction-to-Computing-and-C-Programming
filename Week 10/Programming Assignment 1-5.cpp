#include <iostream>
using namespace std;

int main() {
  int n;
  int ct[100][100];
  int abnormal = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> ct[i][j];
    }
  }
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < n - 1; j++) {
      if (ct[i - 1][j] - ct[i][j] >= 50 && ct[i + 1][j] - ct[i][j] >= 50 && \
        ct[i][j - 1] - ct[i][j] >= 50 && ct[i][j + 1] - ct[i][j] >= 50) {
        abnormal += 1;
      }
    }
  }
  cout << abnormal << endl;
  return 0;
}
