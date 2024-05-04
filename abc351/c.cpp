#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin>>N;
  vector<ll> A(N);
  vector<ll> ans;
  for(auto& a:A)cin>>a;
  rep(i,N){
    ans.emplace_back(A[i]);
    while(true){
      if(ans.size()<=1)break;
      if(ans[ans.size()-1]!=ans[ans.size()-2])break;
      if(ans[ans.size()-1]==ans[ans.size()-2]){
        int same=ans[ans.size()-1];
        ans.pop_back();
        ans.pop_back();
        ans.emplace_back(same+1);
      }
    }
  }
  cout<<ans.size()<<endl;
  return 0;
}
