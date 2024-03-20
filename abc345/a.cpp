#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

int main() {
  std::string str;
  cin >> str;
  bool flag = true;
  if( (*(str.begin()) == '<') && (*(str.end()-1) == '>') ) {
    for ( auto it = str.begin() + 1; it != str.end() - 1; it++ ) {
      if ( *it != '=' ) {
        flag = false;
        break;
      }
    }
  } else {
    flag = false;
  }
  cout << (flag ? "Yes": "No") << endl;
  return 0;
}
