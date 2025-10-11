

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> RearrangeElements(vector<int>& nums) {
        
        int n = nums.size();

        vector<int>positive,negative;

        for(int i=0;i<n;i++){

            if(nums[i]>= 0)positive.push_back(nums[i]);
            else negative.push_back(nums[i]);
        }

        for(int i=0,j=0;i<n && j<positive.size();i+=2,j++)nums[i] = positive[j];

        for(int i=1,j=0;i<n && j<negative.size();i+=2,j++)nums[i] = negative[j];

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

  vector<int>result = s.RearrangeElements(nums);

  cout<<"Array after Rearrange array elements by sign :  \n";

  for(int i=0;i<n;i++){
    
    cout<<result[i]<<" ";
  }

  return 0;

}