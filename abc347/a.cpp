#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  for(auto& i:a)cin>>i;
  for(auto& i:a){
    if(!(i%k))cout<<(i/k)<<' ';
  }
  return 0;
}
