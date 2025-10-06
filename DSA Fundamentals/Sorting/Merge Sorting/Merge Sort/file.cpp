
#include<iostream>
#include<climits>
#include<cmath>
#include<vector>

using namespace std;

void merge(vector<int>&arr,int low,int mid,int high) {

  int l = mid-low+1;
  int r = high-mid;

  vector<int>arr1(l),arr2(r);

  for(int i=0;i<l;i++) {
    arr1[i] = arr[low+i];
  }
  for(int j=0;j<r;j++) {
    arr2[j] = arr[mid+1+j];
  }


  int i=0;
  int j=0;
  int k=low;

  while(i<l && j<r) {

    if(arr1[i]<=arr2[j]) {
      arr[k] = arr1[i];
      i++;
      k++;
    }
    else{
      arr[k] = arr2[j];
      j++;
      k++;
    }
  }

  while(i<l) {
    arr[k] = arr1[i];
    i++;
    k++;
  }

  while(j<r) {
    arr[k] = arr2[j];
    j++;
    k++;
  }
}

void mergeSort(vector<int>&arr,int low,int high) {

  if(low >= high)return;

  int mid = low + (high-low)/2;

  mergeSort(arr,low,mid);
  mergeSort(arr,mid+1,high);

  merge(arr,low,mid,high);
  
}

int main() {

  int n;
  cout<<"Enter the no of Elements: ";
  cin>>n;

  vector<int>arr(n);

  for(int i=0;i<n;i++) {

    int val;
    cin>>val;
    arr[i] = val;
  }

  cout<<"Before Sorting : \n";
  for(int i=0;i<n;i++) {

    cout<<arr[i]<<" ";
  }

  mergeSort(arr,0,n);
  
  cout<<"\nAfter Sorting : \n";
  for(int i=0;i<n;i++) {

    cout<<arr[i]<<" ";
  }
  return 0;
}