

#include<bits/stdc++.h>
#include<climits>
#include<iostream>
#include<vector>
using namespace std;

int main() {

  int n;
  cout<<"Enter the size of the array:"<<endl;
  cin>>n;

  vector<int>arr;
  for(int i=0;i<n;i++) {
    int val;
    cin>>val;
    arr.push_back(val);
  }

  int first_maximum = INT_MIN;
  int second_maximum = INT_MIN;

  for(int i=0;i<n;i++) {

    if(arr[i]>first_maximum) {
      second_maximum = first_maximum;
      first_maximum = arr[i];
    }
    else if(arr[i]<first_maximum && arr[i]>second_maximum){
      second_maximum = arr[i];
    }

  }

  if(second_maximum == INT_MIN) cout<<"NO Second Element in the Array."<<endl;
  else cout<<"Second maximum element in the array : "<<second_maximum<<endl;

  return 0;
}