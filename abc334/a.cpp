#include <bits/stdc++.h>
#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

int main() {
  ll a,l,r;
  int m;
  cin>>a>>m>>l>>r;
  ll kmin=(l-a+m-1)/m;
  ll kmax=(r-a)/m+1;
  if(l==r)cout<<kmax-kmin<<endl;
  else cout<<kmax-kmin+1<<endl;
  return 0;
}
