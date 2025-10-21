#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // Place nums[i] in its correct position if possible
            while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        // After rearrangement, the first place where nums[i] != i+1 is the answer
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                return i + 1;
            }
        }

        // If all positions are correct, answer is n + 1
        return n + 1;
    }
};

int main() {
    Solution sol;
    
    vector<int> nums = {3, 4, -1, 1};
    cout << "First missing positive: " << sol.firstMissingPositive(nums) << endl;

    vector<int> nums2 = {1, 2, 0};
    cout << "First missing positive: " << sol.firstMissingPositive(nums2) << endl;

    vector<int> nums3 = {7, 8, 9, 11, 12};
    cout << "First missing positive: " << sol.firstMissingPositive(nums3) << endl;

    return 0;
}
