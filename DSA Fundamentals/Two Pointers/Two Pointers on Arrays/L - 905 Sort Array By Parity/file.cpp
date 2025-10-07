#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n = nums.size();

        vector<int>odd_nums,even_nums;

        for(int i=0;i<n;i++){

            if(nums[i]%2 == 0)even_nums.push_back(nums[i]);
            else odd_nums.push_back(nums[i]);
        }

        for(int i=0;i<odd_nums.size();i++){
            
            even_nums.push_back(odd_nums[i]);
        }

        return even_nums;
    }
};

int main(){

  int n;
  cout<<"Enter the no of Elements : ";
  cin>>n;

  vector<int>nums(n);

  for(int i=0;i<n;i++)cin>>nums[i];

  Solution s;
  vector<int>result = s.sortArrayByParity(nums);

  cout<<"Array after sort by Parity : \n";

  for(int i=0;i<n;i++){

    cout<<result[i]<<" ";
  }

  return 0;
}