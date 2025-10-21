
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        
        int n = mat.size();
        int m = mat[0].size();

        int total = n*m;

        k = k%m;

        for(int i=0;i<n;i++){

            vector<int>shifted(m,0);

            for(int j=0;j<m;j++){

                if(i%2 == 0){

                    shifted[j] = mat[i][(j+k)%m];
                }
                else{

                    shifted[j] = mat[i][(j-k+m)%m];
                }
            }

            if(shifted != mat[i])return false;
        }

        return true;
    }
};


int main() {

  int n,m;
  cout<<"Enter the no of rows and cols of a matrix : \n";
  cin>>n>>m;

  vector<vector<int>>result(n,vector<int>(m));

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>result[i][j];
    }
  }

  int k;
  cout<<"Enter the value for shifting the matrix : \n";
  cin>>k;

  Solution s;

  bool isSame = s.areSimilar(result,k);

  cout<<"The Matrix after matrix similarity after cyclic shifts : \n"<<isSame<<endl;

  return 0;
}