
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();

        int prefix = 1;

        vector<int>result(n,1);

        for(int i=0;i<n;i++) {

            result[i] = prefix;

            prefix *= nums[i];
        }

        int suffix = 1;
        
        for(int i=n-1;i>=0;i--){
            
            result[i] *= suffix;
            
            suffix *= nums[i];
        }

        return result;
    }
};

int main() {

  int n;
  cout<<"Enter the size of the array : ";
  cin>>n;

  vector<int>arr(n);

  for(int i=0;i<n;i++) {

    cin>>arr[i];
  }

  Solution s;
  vector<int>result = s.productExceptSelf(arr);

  cout<<"The product of array except self is : \n";
  for(int i=0;i<n;i++) {

    cout<<result[i]<<" ";
  }

  return 0;
}