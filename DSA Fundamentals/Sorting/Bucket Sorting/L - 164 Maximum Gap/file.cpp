#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;


class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        int n = nums.size();

        if(n<2)return 0;

        sort(nums.begin(),nums.end());

        int max_diff = nums[1]-nums[0];

        for(int i=2;i<n;i++){

            if(nums[i]-nums[i-1] > max_diff)max_diff = nums[i]-nums[i-1];
        }

        return max_diff;

        
    }
};


int main(){

  int n;
  cout<<"Enter no of Elements : ";
  cin>>n;

  vector<int>arr(n);

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  Solution s;
  int maximum_gap = s.maximumGap(arr);

  cout<<"The maximum gap between the two successive elements is : "<<maximum_gap<<endl;

  return 0;
}