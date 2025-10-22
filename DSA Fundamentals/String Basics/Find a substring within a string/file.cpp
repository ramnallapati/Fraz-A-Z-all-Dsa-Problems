
#include <bits/stdc++.h>
#include <string>
using namespace std;


bool isHavingSubstring(int index,string s1,string s2) {

  int j=0;
  for(int i=index;i<s1.size();i++) {

    if(s1[i]==s2[j]) {
      j++;
    }
    else{
      return false;
    }
  }
  return true;
}
int main() {

  cout<<"Enter the full string :"<<endl;
  string s1;
  getline(cin,s1);

  cout<<"Enter the substring. You want to find ?"<<endl;
  string s2;
  getline(cin,s2);

  for(int i=0;i<s1.size();i++) {

    if(s1[i] == s2[0]) {
      if(isHavingSubstring(i,s1,s2)) {
        cout<<true<<endl;
        break;
      }
    }
  }

  cout<<false<<endl;
  return 0;
}