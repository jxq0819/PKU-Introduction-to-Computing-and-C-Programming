#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int score;
  int max = 0;
  for (int i = 0; i < n; i++) {
    cin >> score;
    if (score > max) {
      max = score;
    } 
  }
  cout << max << endl;
  return 0;
}
