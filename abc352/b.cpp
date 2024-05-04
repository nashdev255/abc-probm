#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

int main() {
  string S,T;
  vector<int> A;
  cin>>S>>T;
  int j=0;
  rep(i,T.size()){
    if(T[i]==S[j]){
      A.emplace_back(i+1);
      ++j;
    }
  }
  sort(A.begin(),A.end());
  for(auto& a:A)cout<<a<<' ';
  cout<<endl;
  return 0;
}
