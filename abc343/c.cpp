#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

int main() {
  ll n,ans;
  cin>>n;
  for(ll i=0;i*i*i<=n;i++){
    string str=to_string(i*i*i);
    string rstr=to_string(i*i*i);
    reverse(rstr.begin(),rstr.end());
    if(str==rstr)ans=i*i*i;
  }
  cout<<ans<<endl;
  return 0;
}
