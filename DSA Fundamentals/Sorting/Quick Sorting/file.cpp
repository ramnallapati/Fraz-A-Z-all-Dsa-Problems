#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>

using namespace std;

class Solution {
public:
  int partition(vector<int>&arr,int low,int high) {

    int pivot = arr[high];
    int i = low -1;

    for(int j=low;j<high;j++) {

      if(arr[j]<=pivot) {
        i++;
        swap(arr[i],arr[j]);
      }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
  }
  void quicksort(vector<int>&arr,int low,int high) {

    if(low < high) {

      int pi = partition(arr,low,high);

      quicksort(arr,low,pi-1);
      quicksort(arr,pi+1,high);
    }
  }
  void quickSort(vector<int>&arr) {

    int n = arr.size();
    quicksort(arr,0,n-1);
  }
};

int main() {

  int n;
  cout<<"Enter the no of Elements : ";
  cin>>n;

  vector<int>arr(n);

  for(int i=0;i<n;i++) {
    int val;
    cin>>val;
    arr[i] = val;
  }

  Solution s;

  s.quickSort(arr);

  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;

}