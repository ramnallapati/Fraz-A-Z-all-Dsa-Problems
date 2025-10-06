
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {

  string s;
  cout<<"Enter the strinng";
  getline(cin,s);

  int count = 0;

  for(int i=0;i<s.size();i++) {

    while(i<s.size() && s[i]!=' ') {
      i++;
    }
    count++;
  }

  cout<<count<<endl;
  return 0;
}