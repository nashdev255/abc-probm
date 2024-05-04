#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

int main() {
  int N,X,Y,Z;
  cin>>N>>X>>Y>>Z;
  cout<<((min(X,Y)<Z&&Z<max(X,Y))?"Yes":"No")<<endl;
  return 0;
}
