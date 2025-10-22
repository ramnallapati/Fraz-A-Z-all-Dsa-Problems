
// solve this problem using merge sort

#include<iostream>
#include<climits>
#include<cmath>
#include<vector>

using namespace std;

class Solution {
  public:
    long long merge(vector<int>&arr,int low,int mid,int high) {
        
         vector<int>temp;
         
         int left = low;
         int right = mid+1;
         
         long long count = 0;
         
         while(left <= mid && right <= high) {
             
             if(arr[left]<=arr[right]) {
                 
                 temp.push_back(arr[left]);
                 left++;
             }
             else {
                 
                 count += (mid-left+1);
                 temp.push_back(arr[right]);
                 right++;
             }
         }
         
         while(left <= mid) {
             
             temp.push_back(arr[left]);
             left++;
         }
         while(right <= high) {
             temp.push_back(arr[right]);
             right++;
         }
         
         for(int i=low;i<=high;i++) {
             
             arr[i] = temp[i-low];
         }
         
         return count;
    }
    int mergeSort(vector<int>&arr,int low,int high) {
        
        if(low >= high)return 0;
        
        long long  count = 0;
        
        int mid = low + (high-low)/2;
        
        count += mergeSort(arr,low,mid);
        count += mergeSort(arr,mid+1,high);
        count += merge(arr,low,mid,high);
        
        return int(count);
        
    }
    int inversionCount(vector<int> &arr) {
        
        int n = arr.size();
        
        int low = 0;
        int high = n-1;
        
        return mergeSort(arr,low,high);
        
        
    }
};

int main() {

  int n;
  cout<<"Enter the No of Elements you want : ";
  cin>>n;

  vector<int>arr(n);
  for(int i=0;i<n;i++) {
    int val;
    cin>>val;
    arr[i] = val;
  }

  Solution s;
  
  int countInversions = s.inversionCount(arr);

  cout<<"The No of Count Inversions is : "<<countInversions<<endl;

  return 0;


}