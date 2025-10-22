#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        
        // we can solve this using diff array

        vector<vector<int>>diff(n+1,vector<int>(n+1,0));

        for(int i=0;i<queries.size();i++) {

            int r1 = queries[i][0],c1 = queries[i][1], r2 = queries[i][2], c2 = queries[i][3];

            diff[r1][c1] += 1;

            if(c2+1 < n) diff[r1][c2+1] -= 1;

            if(r2+1 < n) diff[r2+1][c1] -= 1;

            if(r2+1 <n && c2+1 <n) diff[r2+1][c2+1] += 1;
        }

        // step 2. adding prefix sum with row wise

        for(int i=0;i<n;i++) {

            for(int j=1;j<n;j++) {

                diff[i][j] += diff[i][j-1];
            }
        }

        for(int j=0;j<n;j++){

            for(int i=1;i<n;i++) {

                diff[i][j] += diff[i-1][j];
            }
        }


        vector<vector<int>>result(n,vector<int>(n,0));

        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++) {

                result[i][j] = diff[i][j];
            }
        }

        return result;
    }
};


int main() {

  int n;
  cout<<"Enter the size of matrix array : \n";
  cin>>n;

  int m;
  cout<<"Enter the size of queries array : \n";
  cin>>m;

  vector<vector<int>>quries(m,vector<int>(4,0));

  for(int i=0;i<m;i++){

    for(int j=0;j<4;j++){

      cin>>quries[i][j];
    }
  }

  Solution s;

  vector<vector<int>>result = s.rangeAddQueries(n,quries);

  cout<<"\nThe Result after increment submatrices by One : \n";

  for(int i=0;i<n;i++){

    for(int j=0;j<n;j++){

      cout<<result[i][j]<<" ";

    }
    cout<<endl;
  }

  return 0;
}