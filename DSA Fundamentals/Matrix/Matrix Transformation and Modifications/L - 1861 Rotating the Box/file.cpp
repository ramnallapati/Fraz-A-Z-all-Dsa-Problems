#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        
        int n = boxGrid.size();
        int m = boxGrid[0].size();

        for(int i=0;i<n;i++){

            int empty = m-1;

            for(int j=m-1;j>=0;j--){

                if(boxGrid[i][j]=='*'){

                    empty = j-1;
                }
                else if(boxGrid[i][j] == '#'){

                    swap(boxGrid[i][j],boxGrid[i][empty]);
                    empty--;
                }
            }
        }

        // rotating 90 degrees.

        vector<vector<char>>result(m,vector<char>(n));

        for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                result[j][n-1-i] = boxGrid[i][j];
            }
        }

        return result;
    }
};

int main(){

  int n,m;
  cout<<"Enter the no of rows and columns of a matrix : \n";
  cin>>n>>m;

  vector<vector<char>>boxgrid(n,vector<char>(m));

  for(int i=0;i<n;i++){

    for(int j=0;j<m;j++){

      cin>>boxgrid[i][j];
    }
  }

  Solution s;
  vector<vector<char>>result = s.rotateTheBox(boxgrid);

  cout<<"The Box after Rotating : \n";
  
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}