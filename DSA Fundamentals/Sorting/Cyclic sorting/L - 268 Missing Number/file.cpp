
#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        unordered_set<int>st;

        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
        }

        for(int i=0;i<n;i++)
        {
            if(st.find(i)==st.end())return i;
        }
        return n;
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
  int missing_number = s.missingNumber(arr);

  cout<<"The Missing Number in the array is : "<<missing_number<<endl;

  return 0;
}