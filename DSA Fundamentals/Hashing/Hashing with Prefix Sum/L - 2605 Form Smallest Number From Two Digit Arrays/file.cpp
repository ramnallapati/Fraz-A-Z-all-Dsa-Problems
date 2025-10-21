#include <iostream>
#include <vector>
#include <unordered_set>
#include <climits>
using namespace std;

class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        int min_val1 = INT_MAX;
        int min_val2 = INT_MAX;
        int min_val1_val2 = INT_MAX;

        for(int i=0;i<nums1.size();i++){
            min_val1 = min(min_val1,nums1[i]);
            st.insert(nums1[i]);
        }

        for(int i=0;i<nums2.size();i++){
            min_val2 = min(min_val2,nums2[i]);
            if(st.find(nums2[i])!=st.end()){
                min_val1_val2 = min(min_val1_val2,nums2[i]);
            }
        }

        int small = stoi(to_string(min(min_val1,min_val2)) + to_string(max(min_val1,min_val2)));

        return small < min_val1_val2 ? small : min_val1_val2;
    }
};

int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    vector<int> nums1(n1);
    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n1; i++) cin >> nums1[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    vector<int> nums2(n2);
    cout << "Enter elements of second array:\n";
    for (int i = 0; i < n2; i++) cin >> nums2[i];

    Solution sol;
    int result = sol.minNumber(nums1, nums2);
    cout << "Result: " << result << "\n";

    return 0;
}
