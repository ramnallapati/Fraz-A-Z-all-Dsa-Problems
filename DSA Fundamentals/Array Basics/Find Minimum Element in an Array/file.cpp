
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

  int n;
  cout<<"Enter the size of the Array :"<<endl;
  cin>>n;

  vector<int>arr;
  for(int i=0;i<n;i++) {
    int val;
    cin>>val;
    arr.push_back(val);
  }

  cout<<"The Minimumm Element in the Array"<<endl;
  cout<<*min_element(arr.begin(),arr.end())<<endl;
  return 0;
}