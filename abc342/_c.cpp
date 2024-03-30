#include <bits/stdc++.h>
#define rep(i, n) for ( int i = 0; i < n; ++i )
using namespace std;

int main() {
  int n,q;
  string s;
  cin>>n>>s>>q;
  vector<char> c(q),d(q);
  rep(i,q){
    cin>>c[i]>>d[i];
    rep(j,q){
      if(d[i]==c[j]){
        d[j]=d[i];
        c.pop_back();
        d.pop_back();
        break;
      }
    }
  }
  rep(i,q)std::replace(s.begin(),s.end(),c[i],d[i]);
  cout<<s<<endl;
  return 0;
}
