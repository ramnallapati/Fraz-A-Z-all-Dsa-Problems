
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();

        unordered_map<int,vector<int>>mpp;

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                mpp[i-j].push_back(mat[i][j]);
            }
        }

        // sort the vectors;

        for(auto& it:mpp){

            sort(it.second.begin(),it.second.end(),greater<int>());
        }

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                int key = i-j;

                mat[i][j] = mpp[key].back();

                mpp[key].pop_back();
            }
        }

        return mat;
    }
};

int main() {

  int n,m;
  cout<<"Enter the no of rows and columns of the matrix : \n";
  cin>>n>>m;

  vector<vector<int>>mat(n,vector<int>(m,0));

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>mat[i][j];
    }
  }

  Solution s;

  vector<vector<int>>result = s.diagonalSort(mat);

  cout<<"Matrix after the elements are diagonally sorted : \n";

  for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){
      
      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}