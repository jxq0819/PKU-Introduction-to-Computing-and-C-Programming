#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int nums[15000];
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  sort(nums, nums + n);
  if (n % 2 == 0) {
    cout << (nums[n / 2 - 1] + nums[n / 2]) / 2 << endl;
  } else {
    cout << nums[n / 2] << endl;
  }
  return 0;
}
