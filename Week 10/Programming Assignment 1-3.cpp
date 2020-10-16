#include <iostream>
using namespace std;

int main() {
  char str[500];
  char word[100] = { '\0' };
  cin.getline(str, 500);
  int count = 0;
  int curr_max = 0;
  for (int i = 0; i < 500; i++) {
    if (str[i] == ' ' || str[i] == '.') {
      if (count > curr_max) {
        curr_max = count;
        for (int j = 0; j < count; j++) {
          word[j] = str[i - count + j];
        }
      }
      count = 0;
    } else {
      count++;
    }
  }
  for (int i = 0; word[i] != '\0'; i++) {
    cout << word[i];
  }
  return 0;
}
