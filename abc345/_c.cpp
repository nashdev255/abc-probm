#include <iostream>
#include <string>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

int main() {
  std::string s;
  cin >> s;
  long long numberOfPairs = ((s.length() - 1) * s.length()) / 2;
  std::sort(s.begin(), s.end());
  for ( auto it = s.begin(); it != s.end(); it++ ) {
    const long long count = std::count(s.begin(), s.end(), *it);
    if ( 1 < count ) {
      int num = 0;
      for ( int i = 1; i <= count; i++ ) {
        num += count;
      }
      numberOfPairs -= num;
      it += (count - 1);
    }
  }
  cout << numberOfPairs << endl;
  return 0;
}
