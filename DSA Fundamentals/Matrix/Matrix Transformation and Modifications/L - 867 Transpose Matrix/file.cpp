
#include<iostream>
#include<vector>

using namespace std;

class Solution{

  public:
  
  vector<vector<int>> TransposeMatrix(vector<vector<int>>&mat){

    int n = mat.size();
    int m = mat[0].size();

    vector<vector<int>>result(m,vector<int>(n));

    for(int i=0;i<n;i++){
      
      for(int j=0;j<m;j++){

        result[j][i] = mat[i][j];
      }
    }

    return result;
  }
};

int main(){

  int n,m;
  cout<<"Enter the no of rows and columns of a matrix : \n";
  cin>>n>>m;

  vector<vector<int>>mat(n,vector<int>(m,0));

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>mat[i][j];
    }
  }

  Solution s;

  vector<vector<int>>result = s.TransposeMatrix(mat);

  cout<<"The transpose of a matrix is : \n";

  for(int i=0;i<m;i++){

    for(int j=0;j<n;j++){

      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;

}