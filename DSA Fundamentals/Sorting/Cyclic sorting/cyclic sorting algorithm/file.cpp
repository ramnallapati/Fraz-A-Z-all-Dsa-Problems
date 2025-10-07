#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
  void CycliSort(vector<int>&nums){
    
    int n = nums.size();
    int i=0;

    while(i<n){
      
      int correct_index = nums[i]-1;

      if(nums[i] != nums[correct_index]){
        swap(nums[i],nums[correct_index]);
      }
      else{
        i++;
      }
    }
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
  s.CycliSort(arr);

  cout<<"Array after sorting : \n";

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}