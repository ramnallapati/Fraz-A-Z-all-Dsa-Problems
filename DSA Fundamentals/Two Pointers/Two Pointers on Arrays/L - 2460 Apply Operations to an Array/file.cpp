
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        int n = nums.size();

        if(n<=1)return nums;

        vector<int>result;

        for(int i=0;i<n-1;i++){

            if(nums[i]==nums[i+1]){

                nums[i] = 2*nums[i];
                nums[i+1] = 0;
            }
        }

        int pos = 0;
        
        for(int i=0;i<n;i++){
            
            if(nums[i] != 0)nums[pos++] = nums[i];
        }

        while(pos < n)nums[pos++] = 0;
        
        return nums;
    }
};

int main(){

  int n;
  cout<<"Enter the no of Elements in the array : ";
  cin>>n;

  vector<int>arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];

  Solution s;

  vector<int>result = s.applyOperations(arr);

  cout<<"After applying operations to an Array : \n";
  
  for(int i=0;i<n;i++)
  {
    cout<<result[i]<<" ";
  }

  return 0;


}