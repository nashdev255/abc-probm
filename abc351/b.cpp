#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

int main() {
  int N,ansx=0,ansy=0;
  cin>>N;
  vector<vector<char>> A(N,vector<char>(N,' '));
  vector<vector<char>> B(N,vector<char>(N,' '));
  rep(i,N){
    rep(j,N){
      cin>>A[i][j];
    }
  }
  rep(i,N){
    rep(j,N){
      cin>>B[i][j];
    }
  }
  rep(i,N){
    rep(j,N){
      if(A[i][j]!=B[i][j]){
        ansx=i+1;
        ansy=j+1;
      }
    }
  }
  cout<<ansx<<' '<<ansy<<endl;
  return 0;
}
