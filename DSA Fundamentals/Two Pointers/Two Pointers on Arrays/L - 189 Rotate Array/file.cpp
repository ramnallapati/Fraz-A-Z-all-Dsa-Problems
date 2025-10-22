#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();

        if(k == 0 || n==k)return;

        k = k%n;

        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin()+(n-k),nums.end());
        reverse(nums.begin(),nums.end());
    }
};

int main(){

  int n;
  cout<<"Enter the array size : ";
  cin>>n;

  vector<int>arr(n);

  for(int i=0;i<n;i++)cin>>arr[i];

  int k;
  cout<<"Enter the value for no of rotations occur : ";
  cin>>k;

  Solution s;
  s.rotate(arr,k);

  cout<<"After rotating the array : \n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;

}