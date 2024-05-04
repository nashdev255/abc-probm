#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

int main() {
  int N;
  ll sum=0;
  cin>>N;
  vector<int> A(N),B(N),deltaAB(N);
  rep(i,N){
    cin>>A[i]>>B[i];
    deltaAB[i]=abs(A[i]-B[i]);
  }
  int maxIndex=distance(deltaAB.begin(),max_element(deltaAB.begin(),deltaAB.end()));
  A.emplace_back(A[maxIndex]); B.emplace_back(B[maxIndex]);
  A.erase(A.begin()+maxIndex); B.erase(B.begin()+maxIndex);
  rep(i,N)sum+=A[i];
  sum-=A[N-1]; sum+=B[N-1];
  cout<<sum<<endl;
  return 0;
}
