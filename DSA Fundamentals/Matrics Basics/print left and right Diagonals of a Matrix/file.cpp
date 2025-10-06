
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<climits>
using namespace std;

int main(){

  cout<<"Enter the no of row and cols of a Matrix: \n";
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
  // left diagonal of matrix
  cout<<"Left Diagonal of a Matrix : \n";
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(i == j)cout<<arr[i][j]<<" ";
    }
  }

  // Right Diagonal of a matrix
  cout<<"Right Diagonal of a matrix : \n";
  int col_end = col-1;
  for(int i=0;i<row;i++){
    cout<<arr[i][col_end]<<" ";
    col_end--;
  }
  return 0;
}