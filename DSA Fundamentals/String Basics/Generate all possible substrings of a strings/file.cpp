
#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;


int main() {

  string s;
  cout<<"Enter a string:"<<endl;
  getline(cin,s);

  cout<<"All Possible substrings are : \n";

  for(int i=0;i<s.size();i++) {

    for(int j=i+1;j<s.size();j++) {

      cout<<s.substr(i,j)<<endl;
    }
  }


  return 0;
}