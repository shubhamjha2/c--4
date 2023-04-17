#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>
// use to write counting
int main() {
  std::vector<int> v(10);
  std::iota(v.begin(), v.end(), 1);
  for (int i : v) {
    std::cout << i << " ";
  }
  return 0;
}
