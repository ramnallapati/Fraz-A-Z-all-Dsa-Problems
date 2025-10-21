#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int>rows(n,-1);
        vector<int>cols(m,-1);

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                if(matrix[i][j] == 0){

                    rows[i] = 0;
                    cols[j] = 0;
                }
            }
        }

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                if(rows[i]==0 || cols[j]==0){

                    matrix[i][j] = 0;
                }
            }
        }

        

    }
};

int main() {

  int n,m;
  cout<<"Enter the rows and columns of the matrix : \n";
  cin>>n>>m;

  vector<vector<int>>arr(n,vector<int>(m));

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }

  Solution s;
  s.setZeroes(arr);

  cout<<"After set Matrix zeros to an array : \n";

  for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){

      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
  
}