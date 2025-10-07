
#include<iostream>
#include<vector>
#include<climits>
#include<cmath>

using namespace std;


class Solution {
public:
    long long merge(vector<int>& nums, int low, int mid, int high) {
        long long count = 0;
        int j = mid + 1;

        // Count reverse pairs
        for (int i = low; i <= mid; i++) {
            while (j <= high && (long long)nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }

        // Merge two sorted halves
        vector<int> temp;
        int left = low, right = mid + 1;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
            }
        }

        while (left <= mid) temp.push_back(nums[left++]);
        while (right <= high) temp.push_back(nums[right++]);

        for (int i = 0; i < temp.size(); i++) {
            nums[low + i] = temp[i];
        }

        return count;
    }

    long long mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) return 0;
        int mid = low + (high - low) / 2;
        long long count = 0;

        count += mergeSort(nums, low, mid);
        count += mergeSort(nums, mid + 1, high);
        count += merge(nums, low, mid, high);

        return count;
    }

    int reversePairs(vector<int>& nums) {
        return (int)mergeSort(nums, 0, nums.size() - 1);
    }
};

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

  Solution s;
  int reverse_pairs = s.reversePairs(arr);

  cout<<"The Number of Reverse pairs are : "<<reverse_pairs<<endl;
}