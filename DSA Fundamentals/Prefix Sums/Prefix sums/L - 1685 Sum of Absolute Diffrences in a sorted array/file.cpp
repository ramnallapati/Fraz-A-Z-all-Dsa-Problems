#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> prefixSum(n);
        prefixSum[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }

        vector<int> result(n);

        for (int i = 0; i < n; i++) {

            int leftSum = (i > 0) ? prefixSum[i - 1] : 0;
            int rightSum = prefixSum[n - 1] - prefixSum[i];

            result[i] = (nums[i] * i - leftSum) + (rightSum - nums[i] * (n - i - 1));
        }

        return result;
    }
};


int main() {

  int n;
  cout<<"Enter the array size : ";
  cin>>n;

  vector<int>arr(n);

  for(int i=0;i<n;i++) {
    cin>>arr[i];
  }

  Solution s;
  vector<int>result = s.getSumAbsoluteDifferences(arr);

  cout<<"The sum of absolute diffrences in a sorted array is : \n";
  
  for(int i=0;i<n;i++) {

    cout<<result[i] << " ";
  }

  return 0;
}