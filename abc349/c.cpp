#include <bits/stdc++.h>
#define rep(i,n) for(unsigned long i=0;i<n;++i)
#define all(x) x.begin(), x.end()
using namespace std;
using ll = long long;

int main() {
  string S,T;
  cin>>S>>T;
  vector<bool> isPart(3,false);
  bool f=true;
  transform(all(T),T.begin(),::tolower);
  if(T[2]=='x'){
    isPart[2]=true;
    int j=0;
    rep(i,S.size()){
      if(S[i]==T[j]){
        isPart[j]=true;
        j++;
      }
    }
  }else{
    int j=0;
    rep(i,S.size()){
      if(S[i]==T[j]){
        isPart[j]=true;
        j++;
      }
    }
  }
  f=!count(all(isPart),false);
  cout<<(f?"Yes":"No")<<endl;
  return 0;
}
