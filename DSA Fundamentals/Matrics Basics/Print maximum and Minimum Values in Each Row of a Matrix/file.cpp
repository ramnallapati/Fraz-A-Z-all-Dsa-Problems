
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {

  int row,col;
  cout<<"Enter the no of Rows and columns in a Matrix : "<<endl;
  cin>>row>>col;

  vector<vector<int>>arr(row,vector<int>(col,0));

  for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++) {
      int val;
      cin>>val;
      arr[i][j] = val;
    }
  }

  vector<pair<int,int>>rows(row,{INT_MAX,INT_MIN});
  vector<pair<int,int>>cols(col,{INT_MAX,INT_MIN});

  for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++) {

      rows[i].first = min(rows[i].first,arr[i][j]);
      rows[i].second = max(rows[i].second,arr[i][j]);

      cols[j].first = min(cols[j].first,arr[i][j]);
      cols[j].second = max(cols[j].second,arr[i][j]);
    }
  }

  cout<<"\nMinimum and Maximum values in a row wise"<<endl;

  for(auto it:rows) {
    
    cout<<"Minimum value : "<<it.first << " Second Value : "<<it.second<<endl;
  }

  cout<<"\nMinimum and Maximum values in a col wise"<<endl;

  for(auto it:cols) {
    
    cout<<"Minimum value : "<<it.first << " Second Value : "<<it.second<<endl;
  }

  return 0;
}