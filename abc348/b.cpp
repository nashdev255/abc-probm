#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

double calcLength(int x1,int y1,int x2,int y2){
  return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}

int main() {
  int N;
  cin>>N;
  vector<int> x(N),y(N);
  rep(i,N)cin>>x[i]>>y[i];
  //全探索
  rep(i,N){
    int ans=0;
    double maxLength=0;
    rep(j,N){
      if(i==j)continue;
      double length=calcLength(x[i],y[i],x[j],y[j]);
      if(maxLength<length){
        maxLength=length;
        ans=j+1;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
