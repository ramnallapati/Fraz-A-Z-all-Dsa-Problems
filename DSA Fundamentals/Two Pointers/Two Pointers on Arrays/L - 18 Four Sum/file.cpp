#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();

        sort(nums.begin(),nums.end());

        vector<vector<int>>result;
        
        for(int i=0;i<n-3;i++){

            if(i>0 && nums[i]==nums[i-1])continue;

            for(int j=i+1;j<n-2;j++){

                if(j>i+1 && nums[j]==nums[j-1])continue;

                int l = j+1;
                int m = n-1;

                while(l<m ){

                    long long sum = (long long) nums[i]+nums[j]+nums[l]+nums[m];

                    if(sum > target)m--;
                    else if(sum<target)l++;
                    else{
                        
                        result.push_back({nums[i],nums[j],nums[l],nums[m]});
                        l++;
                        m--;
                        while(l<m && nums[l]==nums[l-1])l++;
                        while(m>=0 && nums[m]==nums[m+1])m--;
                    }
                }
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

  int target;
  cout<<"Enter the target value : ";
  cin>>target;

  Solution s;

  vector<vector<int>>result = s.fourSum(arr,target);

  cout<<"The 4sum arrays are : \n";

  for(int i=0;i<result.size();i++){

    for(int j=0;j<4;j++){

      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}