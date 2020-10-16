#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int maxtrix[5][5];
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> maxtrix[i][j];
    }
  }
  int n, m;
  cin >> n >> m;
  if (n < 0 || n > 5 || m < 0 || m > 5) {
    cout << "error" << endl;
  }
  int temp[5];
  for (int i = 0; i < 5; i++) {
    temp[i] = maxtrix[n][i];
    maxtrix[n][i] = maxtrix[m][i];
    maxtrix[m][i] = temp[i];
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << setw(4) << maxtrix[i][j];
    }
    cout << endl;
  }
  return 0;
}
