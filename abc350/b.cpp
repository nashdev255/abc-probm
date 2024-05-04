#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

int main() {
  int N,Q;
  cin>>N>>Q;
  vector<bool> A(N,true);
  vector<int> T(Q);
  for(auto& t:T)cin>>t;
  for(auto& t:T){
    if(A[t-1]){
      A[t-1]=false;
      // cout<<t<<"番目の歯を抜きました"<<endl;
    }
    else{
      A[t-1]=true;
      // cout<<t<<"番目の歯を生やしました"<<endl;
    }
  }
  int ans=0;
  for(auto&& a:A)if(a)ans++;
  // for(auto&& a:A)cout<<a<<endl;
  cout<<ans<<endl;
  return 0;
}
