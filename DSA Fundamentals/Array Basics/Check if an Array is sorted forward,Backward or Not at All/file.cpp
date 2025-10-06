
#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool isForwardSorted(vector<int>&arr){

  for(int i=1;i<arr.size();i++) {

    if(arr[i]<=arr[i-1]) return false;
  }

  return true;
}

bool isBackwardSorted(vector<int>&arr) {

  for(int i=arr.size()-2;i>=0;i--){

    if(arr[i] >= arr[i+1]) return false;
  }

  return true;
}

int main() {

  int n;
  cout<<"Enter the Number of Charecter you want : "<<endl;
  cin>>n;

  vector<int>arr;

  for(int i=0;i<n;i++) {
    
    int val;
    cin>>val;
    arr.push_back(val);

  }

  if(isForwardSorted(arr)){

    cout<< "The Array is sorted in ascending order"<<endl;
  }
  else if(isBackwardSorted(arr)) {

    cout<<"The Array is sorted in Descending order"<<endl;
  }
  else cout<<"The Array is not Sorted in both Forward and Backward"<<endl;
}