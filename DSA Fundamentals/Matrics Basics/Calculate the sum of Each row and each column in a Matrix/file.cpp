
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
  
  vector<int>rows(row,0),cols(col,0);
  for(int i=0;i<row;i++) {

    for(int j=0;j<col;j++) {

      cout<<arr[i][j]<<" ";
      rows[i] += arr[i][j];
      cols[j] += arr[i][j];
    }
    cout<<endl;
  }

  cout<<"Sum of Elements in Rows wise :"<<endl;
  for(int i=0;i<row;i++) {
    cout<<rows[i]<<" ";
  }
  cout<<"\nSum of Elements in column wise :"<<endl;
  for(int i=0;i<col;i++) {
    cout<<cols[i]<<" ";
  }
  return 0;
}