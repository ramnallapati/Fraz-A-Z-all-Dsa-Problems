#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n = nums.size();

        int i=0;
        int j=0;

        while(i<n){

            if(nums[i]!=val){

                nums[j] = nums[i];
                j++;
            }
            i++;
        }

        return j;
    }
};

int main(){

  int n;
  cout<<"Enter the no of Elements in array : ";
  cin>>n;

  vector<int>arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];

  int val;
  cout<<"Enter the value you want to delete : ";
  cin>>val;

  Solution s;

  int arr_size = s.removeElement(arr,val);

  cout<<"Array size after removing the element : "<<arr_size<<endl;

  return 0;

}