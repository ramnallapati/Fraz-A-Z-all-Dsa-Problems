
#include<iostream>
#include<vector>
using namespace std;

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

  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  for(int i=0;i<row;i++) {
    for(int j=0;j<col;j++) {

      if(i!=j && arr[i][j] != arr[j][i]) {
        cout<<"The Given Matrix is not a Symmetric Matrix. \n";
        return 0;
      }
    }
  }
  cout<<"The Given Matrix is a Symmetric Matrix";
  return 0;
}