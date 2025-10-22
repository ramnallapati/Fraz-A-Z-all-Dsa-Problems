#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        

        int n = grid.size();
        int m = grid[0].size();

        int total = n*m;

        k = k%total;

        vector<int>flat;

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                flat.push_back(grid[i][j]);
            }
        }

        vector<int>shifted(total);

        for(int i=0;i<total;i++){

            shifted[(i+k)%total] = flat[i];
        }

        int idx = 0;

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                grid[i][j] = shifted[idx++];
            }
        }

        return grid;
    }
};

int main() {

  int n,m;
  cout<<"Enter the rows and columns of the matrix : \n";
  cin>>n>>m;

  vector<vector<int>>mat(n,vector<int>(m,0));

  for(int i=0;i<n;i++){
    
    for(int j=0;j<m;j++){

      cin>>mat[i][j];
    }
  }

  int k;
  cout<<"Enter the value for how many time you shifted : \n";
  cin>>k;

  Solution s;
  vector<vector<int>>result = s.shiftGrid(mat,k);

  cout<<"The matrix after shifting : \n";

  for(int i=0;i<n;i++){
    
    for(int j=0;j<m;j++){

      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}