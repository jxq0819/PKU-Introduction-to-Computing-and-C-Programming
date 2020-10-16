#include <iostream>
using namespace std;

int main() {
  int count[5] = { 0 };
  char string[80];
  cin.getline(string, 80);
  for (int i = 0; string[i] != '\0'; i++) {
    switch (string[i]) {
    case 'a':
      count[0] += 1;
      break;
    case 'e':
      count[1] += 1;
      break;
    case 'i':
      count[2] += 1;
      break;
    case 'o':
      count[3] += 1;
      break;
    case 'u':
      count[4] += 1;
      break;
    }
  }
  for (int i = 0; i < 5; i++) {
    cout << count[i] << ' ';
  }
  return 0;
}
