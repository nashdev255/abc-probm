#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

int main() {
  int N,K;
  cin>>N>>K;
  vector<int> P(N);
  for(auto& p:P)cin>>p;
  if(K==1){
    cout<<0<<endl;
    return 0;
  }
  sort(P.begin(),P.end());
  for(auto& p:P)cout<<p<<' ';
  return 0;
}
