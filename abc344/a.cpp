#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

int main() {
  std::string str;
  cin >> str;
  for ( int i = 0; ; i++ ) {
    if ( str[i] == '|' ) break;
    cout << str[i];
  }
  std::string sstr;
  for ( int i = str.size() - 1; ; i-- ) {
    if ( str[i] == '|' ) break;
    sstr += str[i];
  }
  std::reverse(sstr.begin(), sstr.end());
  cout << sstr;
  return 0;
}
