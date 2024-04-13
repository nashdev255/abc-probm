#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u32 = unsigned int;
using u64 = unsigned long long;

#define rep(i,n) for(u32 i=0;i<n;++i)

#define all(x) x.begin(), x.end()
#define elif else if

void YESNO(bool t=1) { cout << (t ? "YES": "NO") << endl; }

int m998(ll n) { return n%998244353; }

int main() {
  u32 N,M,K;
  cin>>N>>M>>K;
  vector<vector<u64>> a(N,vector<u64>(N));
  vector<vector<vector<u64>>> s(M,vector<vector<u64>>(3,vector<u64>(3)));
  rep(i,N)rep(j,N)cin>>a[i][j];
  rep(i,M)rep(j,3)rep(k,3)cin>>s[i][j][k];
  cout<<M<<endl;
  rep(m,M){
    rep(p,3){
      rep(q,3){
        cout<<' '<<p<<' '<<q<<endl;
        a[p][q]+=s[m][p][q];
      }
    }
  }
  return 0;
}

