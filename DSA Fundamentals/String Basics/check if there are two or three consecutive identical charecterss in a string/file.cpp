
#include<bits/stdc++.h>
#include<string>
using namespace std;


int main() {

  cout<<"Enter a string:"<<endl;
  string s;
  getline(cin,s);

  for(int i=0;i<s.size();i++) {

    if((i>0 && s[i]==s[i-1]) || (i>1 && s[i]==s[i-1] && s[i]==s[i-2]))cout<<s[i]<<" "<<endl;
  }
  return 0;
}