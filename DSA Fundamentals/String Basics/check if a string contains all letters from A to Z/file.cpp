
#include <bits/stdc++.h>
#include <unordered_set>
#include <string>
using namespace std;

int main() {

  cout<<"Enter a string :"<<endl;
  string s;
  getline(cin,s);

  unordered_set<char>st;
  for(int i=0;i<s.size();i++) {
    
    st.insert(s[i]);
  }

  for(char ch='a';ch<='z';ch++)st.erase(ch);

  for(char ch='A';ch<='Z';ch++)st.erase(ch);

  if(st.empty())cout<<true<<endl;
  else cout<<false<<endl;
  return 0;
}