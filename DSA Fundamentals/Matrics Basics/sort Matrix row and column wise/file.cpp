
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

  cout<<"Enter no of rows and columns of a Matrix: \n";
  int row,col;
  cin>>row>>col;

  vector<vector<int>>arr(row,vector<int>(col,0));

  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      int val;
      cin>>val;
      arr[i][j] = val;
    }
  }

  cout<<"Given Matrix : \n";
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  sort(arr.begin(),arr.end());

  cout<<"Matrix After Sorting : \n";
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}