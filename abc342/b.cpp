#include <bits/stdc++.h>
#define rep(i, n) for ( int i = 0; i < n; ++i )
using namespace std;

int main() {
  int n,q;
  cin>>n;
  vector<int> p(n);
  for(auto& pp:p)cin>>pp;
  cin>>q;
  vector<int> a(q),b(q);
  rep(i,q)cin>>a[i]>>b[i];
  rep(i,q){
    if(distance(p.begin(),find(p.begin(),p.end(),a[i]))<distance(p.begin(),find(p.begin(),p.end(),b[i]))) {
      cout<<a[i]<<endl;
    }else cout<<b[i]<<endl;
  }
  return 0;
}
