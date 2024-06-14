#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> num = {1, 35, 6, 4, 43, 68, 3, 71, 11};

  for (int i = 0; i < num.size() - 1; i++) {
    int min_idx = i;  // Initialize min_idx to the current position
    for (int j = i + 1; j < num.size(); j++) {
      if (num[j] < num[min_idx]) {
        min_idx = j;
      }
    }
    swap(num[i], num[min_idx]);
  }

  for (auto x : num) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
