
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        

        int n = nums.size();

        vector<int>lower,equal,greater;

        for(int i=0;i<n;i++){

            if(nums[i]==pivot)equal.push_back(nums[i]);
            else if(nums[i]>pivot)greater.push_back(nums[i]);
            else lower.push_back(nums[i]);
        }

        for(int i=0;i<equal.size();i++)lower.push_back(equal[i]);


        for(int i=0;i<greater.size();i++)lower.push_back(greater[i]);

        return lower;
    }
};

int main() {

  int n;
  cout<<"Enter the no of Elements : ";
  cin>>n;

  vector<int>nums(n);

  for(int i=0;i<n;i++)cin>>nums[i];

  int pivot;
  cout<<"Enter the pivot Number : ";
  cin>>pivot;

  Solution s;

  vector<int>result = s.pivotArray(nums,pivot);

  cout<<"Array after Arranging according to pivot : \n";
  for(int i=0;i<n;i++){
    cout<<result[i]<<" ";
  }

  return 0;

}