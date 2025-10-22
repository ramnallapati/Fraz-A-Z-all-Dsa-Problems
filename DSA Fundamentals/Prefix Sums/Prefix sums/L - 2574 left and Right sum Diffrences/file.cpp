
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        int n = nums.size();

        int total_sum = 0;

        for(int i=0;i<n;i++)total_sum += nums[i];

        int left_sum = 0;

        vector<int>result(n);

        for(int i=0;i<n;i++){

            int right_sum = total_sum - left_sum - nums[i];

            result[i] = abs(left_sum-right_sum);

            left_sum += nums[i];
        }

        return result;
    }
};

int main() {

  int n;
  cout<<"Enter the no of Elements : ";
  cin>>n;

  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  Solution s;

  vector<int>result = s.leftRightDifference(arr);

  cout<<"The Diffrences between the array of left and right sum diffrences is : \n";
  for(int i=0;i<n;i++){
    cout<<result[i]<<" ";
  }

  return 0;
}