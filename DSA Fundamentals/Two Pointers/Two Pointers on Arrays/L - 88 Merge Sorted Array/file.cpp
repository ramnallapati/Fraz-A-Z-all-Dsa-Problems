#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i]; // add nums2 after nums1’s m elements
        }
        sort(nums1.begin(), nums1.end());
    }
};

int main() {
    int m, n;
    cout << "Enter no of Elements in nums1 and nums2 : ";
    cin >> m >> n;

    vector<int> nums1(m + n);  // allocate extra space
    vector<int> nums2(n);

    cout << "Enter elements of nums1: ";
    for (int i = 0; i < m; i++) cin >> nums1[i];

    cout << "Enter elements of nums2: ";
    for (int j = 0; j < n; j++) cin >> nums2[j];

    Solution s;
    s.merge(nums1, m, nums2, n);

    cout << "Sorted Array after Merging:\n";
    for (int x : nums1) cout << x << " ";
    return 0;
}
