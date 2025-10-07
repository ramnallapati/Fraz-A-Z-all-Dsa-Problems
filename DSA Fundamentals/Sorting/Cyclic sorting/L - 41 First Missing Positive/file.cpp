#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();

        unordered_set<int>st;

        for(auto num:nums)st.insert(num);

        for(int i=1;i<=n;i++){
            
            if(st.find(i) == st.end())return i;
        }

        return n+1;
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

  int missing_number = s.firstMissingPositive(arr);

  cout<<"The First Missing Positive Number is : "<<missing_number<<endl;

  return 0;

}