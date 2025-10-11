#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        unordered_map<int,int>mpp;

        for(int i=0;i<n;i++)
        {
            int new_target = target - nums[i];

            if(mpp.find(new_target)!=mpp.end())
            {
                return {i,mpp[new_target]};
            }

            mpp[nums[i]] = i;
        }

        return {-1,-1};
        
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
  cout<<"Enter the target : ";
  cin>>target;

  Solution s;
  vector<int>result = s.twoSum(arr,target);

  cout<<"The Number of two indices in the array equals to target : \n";

  for(int i=0;i<result.size();i++){

    cout<<arr[i]<<" ";
  }

  return 0;
}