#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin>>N;
  rep(i,N){
    if((i+1)%3==0)
      cout<<'x';
    else cout<<'o';
  }
  return 0;
}
