
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<climits>
using namespace std;

void printMatrix(vector<vector<int>>&arr,int row,int col){

  for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++) {

      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main() {

  cout<<"Enter the no of rows and columns for first Matrix :"<<endl;
  int row1,col1;
  cin>>row1>>col1;

  vector<vector<int>>arr1(row1,vector<int>(col1,0));
  for(int i=0;i<row1;i++) {
    for(int j=0;j<col1;j++) {
      int val;
      cin>>val;
      arr1[i][j] = val;
    }
  }

  cout<<"Enter the no of rows and colums for second Matrix"<<endl;
  int row2,col2;
  cin>>row2>>col2;

  vector<vector<int>>arr2(row2,vector<int>(col2,0));

  if(row1 != row2 || col1 != col2) {

    cout<<"The Addition of Matrix occurs only when rows and columns should be Equal"<<endl;
  }
  for(int i=0;i<row2;i++) {
    for(int j=0;j<col2;j++) {
      int val;
      cin>>val;
      arr2[i][j] = val;
    }
  }

  // printing the Matrix1
  cout<<"Matrix 1 "<<endl;
  printMatrix(arr1,row1,col1);
  cout<<"Matrix 2"<<endl;
  printMatrix(arr2,row2,col2);

  // Addition of Matrix
  vector<vector<int>>add_matrix(row1,vector<int>(col1,0));
  for(int i=0;i<row1;i++) {
    for(int j=0;j<col1;j++) {
      add_matrix[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
  cout<<"Addition of Matrix\n";
  printMatrix(add_matrix,row1,col1);

  // subtraction of matrix
  vector<vector<int>>sub_matrix(row1,vector<int>(col1,0));
  for(int i=0;i<row1;i++) {
    for(int j=0;j<col1;j++) {
      sub_matrix[i][j] = arr1[i][j] - arr2[i][j];
    }
  }
  cout<<"Subtraction of Matrix\n";
  printMatrix(sub_matrix,row1,col1);
  return 0;
}