
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Find the first decreasing element from right
        int i = n - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) i--;

        // Step 2: Find the next greater element to the right of i
        if (i >= 0) {
            int j = n - 1;
            while (j >= 0 && nums[j] <= nums[i]) j--;
            swap(nums[i], nums[j]);
        }

        // Step 3: Reverse the suffix
        reverse(nums.begin() + i + 1, nums.end());
    }
};


int main(){

  int n;
  cout<<"Enter n value : ";
  cin>>n;

  vector<int>arr(n);

  for(int i=0;i<n;i++){

    cin>>arr[i];
  }

  Solution s;

  s.nextPermutation(arr);

  cout<<"The next permutation of the array is : \n";

  for(int i=0;i<n;i++){
    
    cout<<arr[i]<<" ";
  }

  return 0;
  
}