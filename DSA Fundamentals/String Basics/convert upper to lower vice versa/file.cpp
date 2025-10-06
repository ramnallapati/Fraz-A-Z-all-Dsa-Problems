
#include<bits/stdc++.h>
#include <algorithm>
#include<string>
#include <unordered_set>
#include <cctype>
using namespace std;

int main() {

  string s;
  cout<<"Enter a string"<<endl;
  getline(cin,s);
  cout<<s<<endl;
  for(int i=0;i<s.size();i++){

    if(isupper(s[i])) {
      cout<<(char)tolower(s[i]);
    }else {
      cout<<(char)toupper(s[i]);
    }
  }

  return 0;
}