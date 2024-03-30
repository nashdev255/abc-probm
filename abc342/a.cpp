#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  char only_c;
  int ans;
  for(auto& c:s){
    if(count(s.begin(),s.end(),c)==1)only_c=c;
  }
  cout<<distance(s.begin(),find(s.begin(),s.end(),only_c))+1<<endl;
  return 0;
}
