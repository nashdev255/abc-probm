#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
using namespace std;
using ll = long long;

int main() {
  int g,m,k;
  int x=0,y=0,z;
  cin>>k>>g>>m;
  for(int i=0;i<k;i++) {
    if(x==g)x=0;
    else if(y==0)y=m;
    else {
      z=min(g-x, y);
      x+=z; y-=z;
    }
  }
  cout<<x<<' '<<y<<endl;
  return 0;
}
