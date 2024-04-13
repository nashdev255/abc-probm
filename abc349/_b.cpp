#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
#define all(x) x.begin(), x.end()
using namespace std;
using ll = long long;

int main() {
  string S;
  string abc("abcdefghijklmnopqrstuvwxyz");
  vector<int> v(100,0);
  bool ans=true;
  cin>>S;
  for(auto& t:abc){
    if(!count(all(S),t)) continue;
    v[count(all(S),t)]++;
  }
  for(auto& vv:v){
    if(vv!=0&&vv!=2){
      ans=false;
    }
  }
  cout<<(ans?"Yes":"No")<<endl;
  return 0;
}
