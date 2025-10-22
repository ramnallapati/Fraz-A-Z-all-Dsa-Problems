
#include<bits/stdc++.h>
#include<unordered_map>
#include<string>
using namespace std;

int main() {

  cout<<"Enter the string :"<<endl;
  string s;

  getline(cin,s);

  unordered_map<char,pair<int,int>>mpp;

  for(int i=0;i<s.size();i++) {

    if(mpp.find(s[i])!=mpp.end()) {
      
      auto it = mpp.find(s[i]);
      it->second.second = i;
    }
    else mpp[s[i]] = {i,i};
  }

  for(auto it:mpp) {

    cout<<it.first << " " << it.second.first << " "<<it.second.second << endl;
  }

  return 0;
}