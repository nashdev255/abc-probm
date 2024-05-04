#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;++i)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin>>S;
  bool ans=false;
  int numPart=stoi(S.substr(3));
  for(int i=1;i<350;i++){
    if(numPart==i){
      ans=true;
      break;
    }
    if(numPart==316)break;
  }
  cout<<(ans?"Yes":"No")<<endl;
  return 0;
}
