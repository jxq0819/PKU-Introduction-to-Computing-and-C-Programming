#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char str[11];
  char substr[4];
  char newstr[14];
  while (cin >> str >> substr) {
    int len = strlen(str);
    int max_index = 0;
    for (int i = 0; str[i] != '\0'; i++) {
      if (str[i] > str[max_index]) {
        max_index = i;
      }
    }
    for (int i = 0; i <= max_index; i++) {
      newstr[i] = str[i];
    }
    for (int i = max_index + 1, j = 0; substr[j] != '\0'; i++, j++) {
      newstr[i] = substr[j];
    }
    for (int i = max_index + 1; i < strlen(str) + 1; i++) {
      newstr[i + 3] = str[i];
    }
    cout << newstr << endl;
  }
  return 0;
}
