#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  double coordinate[100][2];
  for (int i = 0; i < n; i++) {
    cin >> coordinate[i][0] >> coordinate[i][1];
  }
  double max_distance = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      double distance = sqrt(pow(coordinate[i][0] - coordinate[j][0], 2) + pow(coordinate[i][1] - coordinate[j][1], 2));
      cout << distance << ' ';
      if (distance > max_distance) {
        max_distance = distance;
      }
    }
  }
  cout << fixed << setprecision(4) << max_distance << endl;
  return 0;
}
