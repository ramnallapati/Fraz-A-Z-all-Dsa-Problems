
#include <bits/stdc++.h>
#include <unordered_map>
#include <string>

using namespace std;

int main() {

  cout<<"Enter a string"<<endl;
  string s;
  getline(cin,s);

  int max_occurences = INT_MIN;
  int min_occurences = INT_MAX;

  unordered_map<char,int>mpp;

  for(int i=0;i<s.size();i++) {

    mpp[s[i]]++;
    max_occurences = max(max_occurences,mpp[s[i]]);
    min_occurences = min(min_occurences,mpp[s[i]]);
  }

  cout<<"Maximum occurences charecters"<<endl;
  for(auto it:mpp) {

    if(it.second == max_occurences)cout<<it.first;
  }

  cout<<"\nMinimum occurences charecters"<<endl;
  for(auto it:mpp) {

    if(it.second == min_occurences)cout<<it.first<<" ";
  }
  return 0;
}