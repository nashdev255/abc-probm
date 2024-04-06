#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

int main() {
  int n, q;
  string s;
  cin>>n>>s>>q;
  vector<char> c(q),d(q);
  rep(i,q)cin>>c[i]>>d[i];
  string from,to;
  from=to="abcdefghijklmnopqrstuvwxyz"s;
  rep(i,q)rep(j,26)if(c[i]==to[j])to[j]=d[i];
  rep(i,n)rep(j,26)if(s[i]==from[j])s[i]=to[j];
  cout<<s<<endl;
  return 0;
}
