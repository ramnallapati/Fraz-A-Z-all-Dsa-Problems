#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();

        map<int,int>mpp;

        for(int i=0;i<n;i++)mpp[nums1[i][0]] += nums1[i][1];

        for(int i=0;i<m;i++)mpp[nums2[i][0]] += nums2[i][1];

        vector<vector<int>>result;

        for(auto it:mpp){

            result.push_back({it.first,it.second});
        }

        return result;
    }
};

int main() {

  int n1,n2;
  cout<<"Enter no of Elements in n1 & n2 : ";
  cin>>n1>>n2;

  vector<vector<int>>nums1(n1);

  vector<vector<int>>nums2(n2);

  for(int i=0;i<n1;i++){
    int index,value;
    cin>>index>>value;
    nums1[i] = {index,value};
  }

  for(int i=0;i<n2;i++){
    int index,value;
    cin>>index>>value;
    nums2[i] = {index,value};
  }

  cout<<"Merging Two 2D Arrays by Summing values is : \n";

  Solution s;

  vector<vector<int>>result = s.mergeArrays(nums1,nums2);

  for(auto it:result){

    cout<<it[0] << " "<<it[1]<<"    ";
  }

  return 0;
}