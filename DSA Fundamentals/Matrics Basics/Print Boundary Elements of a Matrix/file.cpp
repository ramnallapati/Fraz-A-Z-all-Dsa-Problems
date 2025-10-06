
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<climits>

using namespace std;

void printBoundaryElements(vector<vector<int>>&arr,int row,int col) {

  int row_start = 0;
  int col_start = 0;
  int row_end = row-1;
  int col_end = col-1;

  // top row
  for(int col=col_start;col<=col_end;col++) {
    cout<<arr[row_start][col]<<" ";
  }
  row_start++;
  

  // right col
  for(int row=row_start;row<=row_end;row++) {
    cout<<arr[row][col_end]<<" ";
  }
  col_end--;


  // bottom row
  for(int col=col_end;col>=0;col--) {
    cout<<arr[row_end][col]<<" ";
  }
  row_end--;

  // left col;
  for(int row=row_end;row>=row_start;row--){
    cout<<arr[row][col_start]<<" ";
  }
}

int main() {

  cout<<"Enter the no of rows & cols of a Matrix : \n";
  int row,col;
  cin>>row>>col;

  vector<vector<int>>arr(row,vector<int>(col,0));

  for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++) {
      int val;
      cin>>val;
      arr[i][j] = val;
    }
  }

  cout<<"Given Matrix : \n";
  for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<"Boundary Elements of a Matrix : \n";
  printBoundaryElements(arr,row,col);
  return 0;
}