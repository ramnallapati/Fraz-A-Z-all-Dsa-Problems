#include<iostream>
#include<climits>
#include<vector>
#include<cmath>

using namespace std;


void insertionSort(vector<int>&arr) {

  int n = arr.size();

  for(int i=1;i<n;i++) {

    int key = arr[i];
    int j = i-1;
    while(j>=0 && arr[j]>key) {

      arr[j+1] = arr[j];
      j--;
    }

    arr[j+1] = key;
  }
}
int main() {

  int n;
  cout<<"Enter n Value : ";
  cin>>n;

  vector<int>arr(n);

  for(int i=0;i<n;i++) {
    int val;
    cin>>val;
    arr[i] = val;
  }

  cout<<"Before  sort : \n";
  for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
  }

  insertionSort(arr);

  cout<<"\nAfter Sort : \n";
  for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
  }
  return 0;
}