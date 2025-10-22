
// swapping the adjacent elements

#include<iostream>
#include<climits>
#include<vector>

using namespace std;

void bubbleSort(vector<int>&arr) {

  int n = arr.size();

  for(int i=0;i<n-1;i++) {

    bool did_swap = false;

    for(int j=0;j<n-i-1;j++) {
      
      if(arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;

        did_swap = true;
      }
    }

    if(!did_swap) break;
  }
}

int main() {

  int n;
  cout<<"Enter the number of Elements : ";
  cin>>n;

  vector<int>arr(n);

  for(int i=0;i<n;i++) {
    int val;
    cin>>val;
    arr[i] = val;
  }

  cout<<"Before Bubble sort : \n";
  for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
  }

  bubbleSort(arr);

  cout<<"\nAfter Bubble Sort : \n";
  for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
  }
  return 0;
}


// Time complexity = O(N)
