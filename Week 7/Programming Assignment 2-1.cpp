#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float total;
  int a[4] = { 0, 0, 0, 0 };
  cin >> total;
  for (int i = 0; i < total; i++) {
    int age;
    cin >> age;
    if (age <= 18) {
      a[0]++;
    } else if (age <= 35) {
      a[1]++;
    } else if (age <= 60) {
      a[2]++;
    } else {
      a[3]++;
    }
  }
  cout << "1-18: " << fixed << setprecision(2) << a[0] / total * 100 << "%" << endl;
  cout << "19-35: " << fixed << setprecision(2) << a[1] / total * 100 << "%" << endl;
  cout << "36-60: " << fixed << setprecision(2) << a[2] / total * 100 << "%" << endl;
  cout << "60-: " << fixed << setprecision(2) << a[3] / total * 100 << "%" << endl;
  return 0;
}
