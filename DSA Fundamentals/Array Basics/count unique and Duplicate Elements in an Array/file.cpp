
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main() {

  int n;
  cout<<"Enter the size of the Array : "<<endl;
  cin>>n;

  unordered_map<int,int>mpp;

  vector<int>unique_elements,duplicate_elements;

  for(int i=0;i<n;i++) {
    
    int val;
    cin>>val;
    if(mpp.find(val)!=mpp.end()) {
      duplicate_elements.push_back(val);
    }
    mpp[val]++;
  }

  for(auto &it : mpp) {

    if(it.second == 1)unique_elements.push_back(it.first);
  }

  cout<<"The Unique Elements : "<<endl;
  for(int i=0;i<unique_elements.size();i++) {
    cout<<unique_elements[i] << " ";
  }

  cout<<"\nThe Duplicate Elements : "<<endl;
  for(int i=0;i<duplicate_elements.size();i++) {
    cout<<duplicate_elements[i]<<" ";
  }
  return 0;
}