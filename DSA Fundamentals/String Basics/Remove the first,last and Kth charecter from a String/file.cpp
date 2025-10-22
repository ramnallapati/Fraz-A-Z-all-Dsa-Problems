
#include<bits/stdc++.h>
#include<string>

using namespace std;


int main() {

  cout<<"Enter the string:"<<endl;
  string s;
  getline(cin,s);

  int index;
  cout<<"Enter the index of Removing charecter:\n";
  cin>>index;

  string res = "";

  for(int i=0;i<s.size();i++) {

    if(i==0 || i==s.size()-1 || i==index)continue;
    else res += s[i];
  }

  cout<<res<<endl;

  return 0;
}