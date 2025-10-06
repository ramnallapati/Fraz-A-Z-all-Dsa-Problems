
#include<iostream>
#include<climits>
#include<cmath>
#include<vector>

using namespace std;

class Solution {
public:

    void merge(vector<int>&nums,int low,int mid,int high,vector<pair<int,int>>&enum_nums,vector<int>&result) {

        int left = low;
        int right = mid+1;
        int k = 0;

        vector<pair<int,int>>temp(high-low+1);

        int count = 0;

        while(left <= mid && right <= high) {

            if(enum_nums[right].first < enum_nums[left].first) {

                count++;
                temp[k++] = enum_nums[right++];
            }
            else {
                result[enum_nums[left].second] += count;
                temp[k++] = enum_nums[left++];
            }

        }

        while(left <= mid) {
            
            result[enum_nums[left].second] += count;
            temp[k++] = enum_nums[left++];
        }

        while(right <= high) {
            temp[k++] = enum_nums[right++];
        }

        for(int p=0;p<temp.size();p++) {

            enum_nums[low+p] = temp[p];
        }
    }
    void mergeSort(vector<int>&nums,int low,int high,vector<pair<int,int>>& enum_nums,vector<int>&result) {

        if(low >= high)return;

        int mid = low + (high-low)/2;

        mergeSort(nums,low,mid,enum_nums,result);
        mergeSort(nums,mid+1,high,enum_nums,result);

        merge(nums,low,mid,high,enum_nums,result);
    }
    vector<int> countSmaller(vector<int>& nums) {
        
        int n = nums.size();

        vector<pair<int,int>>enum_nums(n);

        vector<int>result(n,0);

        for(int i=0;i<n;i++) {

            enum_nums[i] = {nums[i],i};
        }

        mergeSort(nums,0,n-1,enum_nums,result);

        return result;
    }
};


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

  Solution s;

  vector<int> smaller_elements = s.countSmaller(arr);

  cout<<"The No of smaller Elements after Indexing : \n";

  for(int i=0;i<n;i++) {

    cout<<smaller_elements[i]<<" ";
  }

  return 0;
}