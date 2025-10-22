#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<cmath>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();

        unordered_map<int,int>mpp;

        for(int i=0;i<n;i++)mpp[nums[i]]++;

        vector<pair<int,int>>freq;

        for(auto it:mpp)freq.push_back({it.second,it.first});

        sort(freq.rbegin(),freq.rend());

        vector<int>result;

        for(int i=0;i<freq.size()&&k>0;i++){

            result.push_back(freq[i].second);
            k--;
        }

        return result;
    }
};

int main() {

  int n;
  cout<<"Enter no of Elements : ";
  cin>>n;

  vector<int>arr(n);

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int k;
  cout<<"Enter no of Top k Elements : ";
  cin>>k;

  Solution s;
  vector<int>result = s.topKFrequent(arr,k);

  cout<<"The Top k frequent Elements are : \n";
  for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
  }

  return 0;
}