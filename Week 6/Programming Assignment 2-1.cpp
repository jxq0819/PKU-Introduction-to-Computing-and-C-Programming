#include <iostream>
using namespace std;

int main() {
  int x, y, n, result;
  cin >> n >> x >> y;
  if (y % x == 0) {
    result = n - y / x;
  } else {
    result = n - y / x - 1;
  }    
  if (result < 0) {
    result = 0;
  }
  cout << result << endl;
  return 0;	
}
