#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();

        int low = 0;
        int mid = 0;
        int high = n-1;

        while(mid <= high){

            if(nums[mid]==0){

                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)mid++;
            else if(nums[mid]==2){
                
                swap(nums[mid],nums[high]);
                high--;
            }
        }
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
  s.sortColors(arr);

  cout<<"The Array after sorting the colors : \n";

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
  
}