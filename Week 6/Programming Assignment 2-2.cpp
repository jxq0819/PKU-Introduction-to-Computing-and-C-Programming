#include <iostream>
#include <math.h> 
using namespace std;

int main() {
  int h, r, result;
  double pi = 3.14159;
  double volume;
  cin >> h >> r;
  volume = r * r * pi * h;
  result = ceil(20 * 1000 / volume);
  cout << result << endl;
  return 0;
}
