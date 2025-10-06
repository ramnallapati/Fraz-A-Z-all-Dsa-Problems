
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {

  string s;
  cout<<"Enter a string"<<endl;
  getline(cin,s);

  int i=0;
  while(i<s.size() && s[i]==' ')i++;
  int j=s.size()-1;
  while(j>=0 && s[j]==' ')j--;

  string new_string = s.substr(i,j);
  cout<<new_string<<endl;
  return 0;
}