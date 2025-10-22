
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        int n = nums.size();

        vector<int>odd_nums,even_nums;

        for(int i=0;i<n;i++){

            if(nums[i]%2 == 0)even_nums.push_back(nums[i]);
            else odd_nums.push_back(nums[i]);
        }

        for(int i=0,j=0;i<n && j<even_nums.size();i+=2,j++)nums[i] = even_nums[j];

        for(int i=1,j=0;i<n && j<odd_nums.size();i+=2,j++)nums[i] = odd_nums[j];

        return nums;
    }
};

int main(){

  int n;
  cout<<"Enter the no of Elements : ";
  cin>>n;

  vector<int>nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }

  Solution s;

  vector<int>result = s.sortArrayByParityII(nums);

  cout<<"Array after Sort Array By parity || \n";

  for(int i=0;i<n;i++){
    
    cout<<result[i]<<" ";
  }

  return 0;

}