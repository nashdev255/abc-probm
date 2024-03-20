#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll comb(ll c) {
  return c*(c-1)/2;
}

int main() {
  string s;
  cin>>s;
  ll ans=0,same=0;
  vector<ll> cnt(26);
  for(int i=0;i<cnt.size();i++){
    cnt[i]=count(s.begin(),s.end(),'a'+i);
    same+=comb(cnt[i]);
  }
  ans=comb(s.size())-same;
  if(same)ans++;
  cout<<ans<<endl;
  return 0;
}
