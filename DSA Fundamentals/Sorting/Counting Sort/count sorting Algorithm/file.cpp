
#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
#include<algorithm>

using namespace std;

class Solution {
public:
  void countSorting(vector<int>&arr) {

    // find the maximum element
    int maximum = *max_element(arr.begin(),arr.end());

    vector<int>count(maximum+1,0);

    for(int i=0;i<arr.size();i++){

      count[arr[i]]++;
    }

    for(int i=1;i<=maximum;i++) {
      
      count[i] += count[i-1];
    }

    int n = arr.size();
    vector<int>output(n);

    for(int i=n-1;i>=0;i--){

      output[arr[i]-1] = arr[i];
      count[arr[i]]--;
    }
    

    for(int i=0;i<n;i++){

      arr[i] = output[i];
    }
  }
};

int main() {

  int n;
  cout<<"Enter n value : ";
  cin>>n;

  vector<int>arr(n);

  for(int i=0;i<n;i++) {
    int val;
    cin>>val;
    arr[i] = val;
  }

  Solution s;
  s.countSorting(arr);

  cout<<"After count Sorting : \n";

  for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
  }

  return 0;
}