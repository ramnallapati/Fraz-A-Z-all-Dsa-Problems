
#include<iostream>
#include<climits>
#include<cmath>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mpp;
        for(int num : arr1) mpp[num]++;

        vector<int> result;

        // Place elements according to arr2
        for(int num : arr2) {
            if(mpp.find(num) != mpp.end()) {
                for(int j = 0; j < mpp[num]; j++)
                    result.push_back(num);
                mpp.erase(num);  // erase single key
            }
        }

        // Place remaining elements in ascending order
        for(auto it : mpp) {
            for(int j = 0; j < it.second; j++)
                result.push_back(it.first);
        }

        return result;
    }
};


int main() {

  int n1,n2;

  cout<<"Enter n1 and n2 values : ";
  cin>>n1>>n2;

  cout<<"Enter first array values : \n";
  vector<int>arr1(n1);
  for(int i=0;i<n1;i++){
    int val;
    cin>>val;
    arr1[i] = val;
  }

  cout<<"Enter the arr2 values : \n";
  vector<int>arr2(n2);
  for(int i=0;i<n2;i++) {
    int val;
    cin>>val;
    arr2[i] = val;
  }

  Solution s;
  vector<int>result = s.relativeSortArray(arr1,arr2);

  cout<<"Elements after sorting : \n";
  for(int i=0;i<result.size();i++) {
    cout<<result[i]<<" ";
  }

  return 0;
}