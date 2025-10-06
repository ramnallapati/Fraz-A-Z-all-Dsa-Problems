
#include<iostream>
#include<vector>
using namespace std;

int main() {

  cout<<"Enter no of rows and columns of a Matrix : \n";
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

  bool isIdentity = false;
  for(int i=0;i<row;i++) {

    if(isIdentity)break;
    for(int j=0;j<col;j++) {

      if(i==j && (arr[i][j]!=1 || arr[j][i]!=1)){

        isIdentity = true;
        break;
      }
      else if(i!=j && (arr[i][j]!=0 || arr[j][i]!=0)) {
        isIdentity = true;
        break;
      }
      else{
        break;
      }
    }
  }
  if(isIdentity)cout<<"The Given Matrix is not Identical Matrix. \n";
  else  cout<<"The Given Matrix is Identical Matrix. \n";
  return 0;
}