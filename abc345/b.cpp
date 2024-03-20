#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;

long long ceil(long long N) {
  if ( N > 0 ) return (N - 1) / 10 + 1;
  else return N / 10;
}

int main() {
  long long x;
  cin >> x;
  cout << ceil(x) << endl;
  return 0;
}
