#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

int main() {
  int n,a,b;
  cin>>n>>a>>b;
  vector<int> d(n);
  vector<int> dd(n-1);
  for(auto& i:d)cin>>i;
  rep(i,n)dd[i]=d[i+1]-d[i];
  if(*(d.end()-1)-*(d.begin())<a)cout<<"Yes"<<endl;
  else if([&](){
    static bool f=true;
    for(auto& i:dd){
      if(i<abs(a-b)){
        f=false;
        break;
      }
    }
    return f;
  }())cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
