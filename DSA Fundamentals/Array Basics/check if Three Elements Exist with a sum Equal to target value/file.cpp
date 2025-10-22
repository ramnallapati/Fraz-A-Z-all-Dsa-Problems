
#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {

  int n;
  cout<<"Enter the size of the array :"<<endl;
  cin>>n;

  vector<int>arr;
  cout<<"Enter the Elements in an Array :"<<endl;
  for(int i=0;i<n;i++) {
    int val;
    cin>>val;
    arr.push_back(val);
  }

  sort(arr.begin(),arr.end());
  int target_value;
  cout<<"Enter the target Value :"<<endl;
  cin>>target_value;

  unordered_map<int,int>mpp;
  bool isTargetFound = false;

  for(int i=0;i<n;i++) {
    
    int j = i+1;
    int k = n-1;
    while(j<=k && !isTargetFound) {

      int sum = arr[i]+arr[j]+arr[k];

      if(sum == target_value) {
        cout<<"The Target element is Exist in the array"<<endl;
        isTargetFound = true;
        break;
      }
      else if(sum < target_value) {
        j++;
      }
      else k--;
    }
  }

  if(!isTargetFound) cout<<"The Target Element is not Exist in the Array."<<endl;
  return 0;
}