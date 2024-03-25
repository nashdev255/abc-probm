/*
  std::cbrt()は競プロではdeprecated
*/
#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;

int main() {
  unsigned long long n;
  cin >> n;
  long long ans = 0;
  for ( unsigned int i = (long long)std::cbrt(n); 0 < i; i-- ) {
    long long m = std::floor(std::pow(i, 3));
    std::string str_num(std::to_string(m));
    std::string rstr_num(std::to_string(m));
    std::reverse(rstr_num.begin(), rstr_num.end());
    if ( str_num == rstr_num  ) {
      ans = std::pow(i, 3);
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
