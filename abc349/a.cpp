#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

int main() {
  int N,ans=0;
  cin>>N;
  rep(i,N-1){
    int a;
    cin>>a;
    ans+=-a;
  }
  cout<<ans<<endl;
  return 0;
}
