

// Radix sort is same as counting sort. but in radix sort it sorts the elements by digit by digit

#include<iostream>
#include<cmath>
#include<algorithm>
#include<climits>
#include<vector>

using namespace std;

class Solution{
public:
  void sorting(vector<int>&arr,int exp,int max_num) {

    int n = arr.size();

    vector<int>count(10,0);

    for(int i=0;i<n;i++){
      count[(arr[i]/exp)%10]++;
    }

    for(int i=1;i<10;i++){
      count[i] += count[i-1];
    }

    vector<int>output(n);

    for(int i=n-1;i>=0;i--){

      int digit = (arr[i]/exp)%10;
      output[count[digit]-1] = arr[i];
      count[digit]--;
    }

    for(int i=0;i<n;i++) {
      arr[i] = output[i];
    }


  }
  void RadixSort(vector<int>&arr) {

    int n = arr.size();

    int max_num = *max_element(arr.begin(),arr.end());

    for(int exp=1;(max_num/exp)>0;exp*=10) {

      sorting(arr,exp,max_num);
    }
  }
};

int main() {

  int n;
  cout<<"Enter the no of Elements you want : ";
  cin>>n;

  vector<int>arr(n);

  for(int i=0;i<n;i++){

    int val;
    cin>>val;
    arr[i] = val;
  }

  Solution s;
  s.RadixSort(arr);
  cout<<"Elements after Radix sort : \n";
  
  for(int i=0;i<n;i++){

    cout<<arr[i]<<" ";
  }

  return 0;

}