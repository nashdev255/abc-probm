#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define debug() cout<<"DEBUGGING"<<endl;
using namespace std;
using ll = long long;

//DFS??
int main() {
  int N;
  cin>>N;
  vector<ll> A(N),C(N);
  rep(i,N)cin>>A[i]>>C[i];
  vector<vector<ll>> b(*(max_element(C.begin(),C.end())));
  rep(i,N)b[C[i]-1].emplace_back(A[i]);
  vector<ll> bb(*(max_element(C.begin(),C.end())));
  rep(i,(*(max_element(C.begin(),C.end()))))bb[i]=*(min_element(b[i].begin(),b[i].end()));
  cout<<*(max_element(bb.begin(),bb.end()))<<endl;
  return 0;
}
