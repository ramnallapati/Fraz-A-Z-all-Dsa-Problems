#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();

        vector<vector<int>>result;

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){

            if(i!=0 && nums[i]==nums[i-1])continue;
            int j=i+1;
            int k =n-1;

            while(j<k){

                int sum = nums[i]+nums[j]+nums[k];

                if(sum == 0){

                    result.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;

                    while(j<k && nums[j]==nums[j-1])j++;

                    while(k>=0 && nums[k]==nums[k+1])k--;
                }
                else if(sum>0)k--;
                else j++;
            }
        }

        return result;
    }
};

int main(){

  int n;
  cout<<"Enter the array size : ";
  cin>>n;

  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  Solution s;

  vector<vector<int>>result = s.threeSum(arr);

  cout<<"Sum of Tree Number becoming to zero : \n";

  for(int i=0;i<result.size();i++){

    for(int j=0;j<3;j++){

      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}