#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        unordered_set<int> st1(nums1.begin(), nums1.end());
        unordered_set<int> st2(nums2.begin(), nums2.end());

        int count1 = 0;
        for(int i = 0; i < n; i++) {
            if(st2.find(nums1[i]) != st2.end())
                count1++;
        }

        int count2 = 0;
        for(int i = 0; i < m; i++) {
            if(st1.find(nums2[i]) != st1.end())
                count2++;
        }

        return {count1, count2};
    }
};

int main() {
    int n, m;
    cout << "Enter size of first vector: ";
    cin >> n;
    vector<int> nums1(n);
    cout << "Enter elements of first vector:\n";
    for(int &x : nums1) cin >> x;

    cout << "Enter size of second vector: ";
    cin >> m;
    vector<int> nums2(m);
    cout << "Enter elements of second vector:\n";
    for(int &x : nums2) cin >> x;

    Solution sol;
    vector<int> result = sol.findIntersectionValues(nums1, nums2);

    cout << "Count of elements from first vector in second vector: " << result[0] << "\n";
    cout << "Count of elements from second vector in first vector: " << result[1] << "\n";

    return 0;
}
