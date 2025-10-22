
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();

        int i=1;
        int j=0;

        while(i<n){

            if(nums[i]!=nums[j]){
                j++;
                nums[j] = nums[i];
            }
            i++;
        }
        return j+1;
    }
};

int main(){

  int n;
  cout<<"Enter the no of Elements : ";
  cin>>n;

  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  Solution s;

  int arr_without_duplicate_size = s.removeDuplicates(arr);

  cout<<"The size of the sorted array without Duplicates : "<<arr_without_duplicate_size<<endl;

  return 0;
}