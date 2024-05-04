#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

int main() {
  int as=0,bs=0;
  rep(i,9){
    int a;
    cin>>a;
    as+=a;
  }
  rep(i,8){
    int b;
    cin>>b;
    bs+=b;
  }
  cout<<as-bs+1<<endl;
  return 0;
}
