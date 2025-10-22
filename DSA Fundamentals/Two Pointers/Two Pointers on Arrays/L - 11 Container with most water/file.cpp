#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>

using namespace std;


class Solution {
public:
    int maxArea(vector<int>& nums) {
        
        int n = nums.size();

        int left = 0;
        int right = n-1;

        int maxCapacity = 0;

        while(left <= right)
        {
            int width = (right-left);
            int min_height = min(nums[left],nums[right]);

            maxCapacity = max(maxCapacity,width*min_height);

            if(nums[left]<nums[right])left++;
            else right--;
        }
        
        return maxCapacity;
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
  int max_water_capacity = s.maxArea(arr);

  cout<<"The container can hold a maximum capacity of water : "<<max_water_capacity<<endl;

  return 0;
}