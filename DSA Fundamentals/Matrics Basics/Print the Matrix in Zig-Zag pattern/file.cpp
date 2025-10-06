
#include<iostream>
#include<vector>
#include<climits>

using namespace std;

void printZigZagPattern(vector<vector<int>>&arr,int rows,int cols){

  // No of Diagonals in a Matrix = ( rows + cols -1);
  int d = rows + cols -1;

  for(int diagonal=0;diagonal<d;diagonal++) {

    int r,c;

    // Even Diagonals go up right;
    if(diagonal%2 == 0) {

      r = (diagonal < rows) ? diagonal : rows -1;
      c = (diagonal < rows) ? 0 : diagonal-rows+1;

      while(r>=0 && c<cols) {
        cout<<arr[r][c]<<" ";
        r--;
        c++;
      }
    }
    else{
      // Odd Diagonals go down
      r = (diagonal < cols) ? 0 : diagonal -cols +1;
      c = (diagonal < cols) ? diagonal : cols-1;

      while(c>=0 && r<rows) {
        cout<<arr[r][c]<<" ";
        r++;
        c--;
      }
      
    }
    cout<<endl;
  }

}
int main() {

  cout<<"Enter the no of rows and columns of a Matrix : \n";
  int row,col;
  cin>>row>>col;

  vector<vector<int>>arr(row,vector<int>(col,0));

  if(row == 0 || col ==0)
  {
    cout<<"We couldn't Print a Matrix in zig-zag pattern. \n";
    return 0;
  }

  for(int i=0;i<row;i++){
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

  cout<<"Print the matrix in zig-zag pattern. \n";
  printZigZagPattern(arr,row,col);

  return 0;
}