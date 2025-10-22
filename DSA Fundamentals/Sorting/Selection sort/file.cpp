
#include<iostream>
#include<climits>
#include<cmath>
#include<vector>

using namespace std;

void selectionSort(vector<int>&arr) {

  int n = arr.size();

  for(int i=0;i<n-1;i++) {

    int min_index = i;

    for(int j=i+1;j<n;j++) {

      if(arr[j]<arr[min_index]) {

        min_index = j;
      }
    }

    if(min_index != i)swap(arr[i],arr[min_index]);
  }
}

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

  cout<<"Before Sorting : \n";
  for(int i=0;i<n;i++) {

    cout<<arr[i]<<" ";
  }

  selectionSort(arr);
  
  cout<<"\nAfter Sorting : \n";
  for(int i=0;i<n;i++) {

    cout<<arr[i]<<" ";
  }
  return 0;
}