#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        int s = original.size();

        vector<vector<int>>result(m,vector<int>(n,0));

        if(m*n != s)return {};

        int k=0;

        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){

                result[i][j] = original[k++];
            }
        }
        
        return result;
    }
};

int main(){

  int n;
  cout<<"Enter the size of the array : \n";
  cin>>n;

  vector<int>arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];

  int m,k;
  cout<<"Enter the size of matrix rows and columns : \n";
  cin>>m>>k;

  Solution s;

  vector<vector<int>>result = s.construct2DArray(arr,m,k);

  cout<<"After transforming the array into matrix is : \n";

  for(int i=0;i<m;i++){
    
    for(int j=0;j<k;j++){

      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;


}