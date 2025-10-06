
#include<iostream>
#include<vector>
using namespace std;

int main() {

  int row,col;
  cout<<"Enter no of rows & cols of a Matrix : \n";
  cin>>row>>col;

  vector<vector<int>>arr(row,vector<int>(col,0));

  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      int val;
      cin>>val;
      arr[i][j] = val;
    }
  }

  int count_zeros = 0;
  cout<<"Given Matrix : \n";
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++) {
      cout<<arr[i][j]<<" ";
      if(arr[i][j] == 0)count_zeros++;
    }
    cout<<endl;
  }

  if(count_zeros > (row*col))cout<<"The Given Matrix is a sparse Matrix. \n";
  else cout<<"The Given Matrix is not a sparse Matrix.";
  return 0;
}