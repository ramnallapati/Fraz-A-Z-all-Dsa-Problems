#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int>max_elements(m,0);

        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){

                max_elements[j] = max(max_elements[j],matrix[i][j]);
            }
        }

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                if(matrix[i][j] == -1)matrix[i][j] = max_elements[j];
            }
        }

        return matrix;
    }
};

int main(){

  int n,m;
  cout<<"Enter the rows and columns of the matrix : \n";
  cin>>n>>m;

  vector<vector<int>>matrix(n,vector<int>(m,0));

  for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){

      cin>>matrix[i][j];
    }
  }

  Solution s;

  vector<vector<int>>result = s.modifiedMatrix(matrix);

  cout<<"After modifying the matrix : \n";

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}