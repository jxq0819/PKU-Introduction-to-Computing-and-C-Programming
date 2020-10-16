#include <iostream>
using namespace std;

int main() {
  char string1[80];
  char string2[80];
  cin.getline(string1, 80);
  cin.getline(string2, 80);
  for (int i = 0; string1[i] != '\0'; i++) {
    string1[i] = tolower(string1[i]);
  }
  for (int i = 0; string2[i] != '\0'; i++) {
    string2[i] = tolower(string2[i]);
  }
  int i = 0;
  char result;
  while (string1[i] != '\0' && (string1[i] == string2[i])) {
    i++;
  }
  if (string1[i] > string2[i]) {
    result = '>';
  } else if (string1[i] < string2[i]) {
    result = '<';
  } else {
    result = '=';
  }
  cout << result << endl;
  return 0;
}
