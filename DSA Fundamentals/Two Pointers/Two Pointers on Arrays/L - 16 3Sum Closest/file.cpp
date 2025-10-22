#include<iostream>
#include<algorithm>
#include<climits>
#include<cmath>
#include<vector>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();

        int count = 0;

        sort(nums.begin(),nums.end());

        int closest_sum = nums[0]+nums[1]+nums[2];

        for(int i=0;i<n;i++){

            int j=i+1;
            int k=n-1;

            while(j<k){

                int sum = nums[i]+nums[j]+nums[k];

                if(abs(sum-target) < abs(closest_sum - target)){

                    closest_sum = sum;
                }

                
                if(sum < target)j++;
                else if(sum > target)k--;
                else return sum;
            }
        }

        return closest_sum;
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

  int closest_sum = s.threeSumClosest(arr,target);

  cout<<"The closest Three sum in the array is : "<<closest_sum <<endl;

  return 0;
}