#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0;i<n;i++){

            for(int j=i+1;j<m;j++){

                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<n;i++){

            reverse(matrix[i].begin(),matrix[i].end());
        }

        
    }
};

int main(){

  int n,m;
  cout<<"Enter the no of rows and columns of a matrix : \n";
  cin>>n>>m;

  vector<vector<int>>mat(n,vector<int>(n));

  for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){

      cin>>mat[i][j];
    }
  }

  Solution s;
  s.rotate(mat);

  cout<<"The Matrix after Rotating : \n";

  for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){

      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}