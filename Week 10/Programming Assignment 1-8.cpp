#include<iostream>
using namespace std;

int main() {
  int tree[10001] = { 0 };
  int l, m;
  cin >> l >> m;
  int start, end;
  for (int i = 0; i <= l; i++) {
    tree[i] = 1;
  }
  for (int i = 0; i < m; i++) {
    cin >> start >> end;
    for (int j = start;j <= end; j++) {
      if (tree[j] == 1) {
        tree[j] = 0;
      }
    }
  }
  int left = 0;
  for (int i = 0; i <= l; i++) {
    if (tree[i] == 1) {
      left++;
    }
  }
  cout << left;
  return 0;
}
