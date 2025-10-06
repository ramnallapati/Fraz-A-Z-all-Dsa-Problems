
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

  cout<<"Enter the no of rows and columns of a matrix :\n";
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

  // printing the Matrix
  cout<<"Matrix : \n";
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<"\nUpper triangle of the Matrix : \n";
  int upper_end = col;
  for(int i=0;i<row;i++){
    for(int j=0;j<upper_end;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    upper_end--;
  }

  cout<<"\nLower triangle of the Matrix : \n";
  int lower_end = 0;
  for(int i=row-1;i>=0;i--)
  {
    for(int j=lower_end;j<col;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    lower_end++;
  }
  return 0;
}