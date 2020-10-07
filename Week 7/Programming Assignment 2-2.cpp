#include <iostream>
using namespace std;

int main() {
  int mark, grade;
  cin >> mark;
  if (mark >= 95 && mark <= 100) {
    grade = 1;
  } else if (mark >= 90 && mark < 95) {
    grade = 2;
  } else if (mark >= 85 && mark < 90) {
    grade = 3;
  } else if (mark >= 80 && mark < 95) {
    grade = 4;
  } else if (mark >= 70 && mark < 80) {
    grade = 5;
  } else if (mark >= 60 && mark < 70) {
    grade = 6;
  } else {
    grade = 7;
  }
  cout << grade << endl;
}
