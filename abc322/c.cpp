#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int ds[n] = {0};
  int t = 0; 
  for(int i=0;i<m;i++) {
    int d;
    cin >> d;
    for(int j=d-1;j>t-1;j--) {
      ds[j] = d;
      t = d;
    }
  }

  return 0;
}

/*
1 2 3
  2 3

1 2 3
2 2 3

1 0 0
*/

/*
1 2 3 4 5 6 7 8
1   3 4     7 8

1 2 3 4 5 6 7 8
1 3 3 4 7 7 7 8

0 1 0 0 2 1 0 0
*/
