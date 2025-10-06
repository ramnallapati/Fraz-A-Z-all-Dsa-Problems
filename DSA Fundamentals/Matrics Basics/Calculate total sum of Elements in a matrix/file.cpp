
#include<bits/stdc++.h>
#include<vector>
#include<iostream>

using namespace std;

int main() {

  int row;
  int col;
  cout<<"Enter no of Rows and columns in a Matrix"<<endl;
  cin>>row>>col;

  vector<vector<int>>arr(row,vector<int>(col,0));

  for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++){
      int val;
      cin>>val;
      arr[i][j] = val;;
    }
  }

  int sum = 0;
  for(int i=0;i<row;i++) {

    for(int j=0;j<col;j++) {

      cout<<arr[i][j]<<" ";
      sum += arr[i][j];
    }
    cout<<endl;
  }

  cout<<"The total sum of the Elements in the Matrix is : "<<sum<<endl;
  
  return 0;
}