
#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>

using namespace std;

int main() {

  int n;
  cout<<"Enter the size of the array : "<<endl;
  cin>>n;

  cout<<"Enter the Array Values : "<<endl;
  vector<int>arr;

  for(int i=0;i<n;i++) {

    int val;
    cin>>val;
    arr.push_back(val);
  }

  int target_value;
  cout<<"Enter the targeted Value : "<<endl;
  cin>>target_value;

  unordered_map<int,int>mpp;
  bool isFound = false;
  for(int i=0;i<n;i++) {

    if(mpp.find(target_value-arr[i])!=mpp.end()){
      cout <<"The targeted sum is Existed in a Array "<<endl;
      isFound = true;
      break;
    }
    mpp[arr[i]]++; 
  }

  if(!isFound)cout<<"The targeted sum is not existing in the array"<<endl;

  return 0;
}