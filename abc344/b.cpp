#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

int main() {
  std::vector<int> numbers;
  while ( true ) {
    int number;
    cin >> number;
    numbers.emplace_back(number);
    if ( number == 0 ) break;
  }
  std::reverse(numbers.begin(), numbers.end());
  for ( auto& num: numbers ) cout << num << endl;
  return 0;
}
