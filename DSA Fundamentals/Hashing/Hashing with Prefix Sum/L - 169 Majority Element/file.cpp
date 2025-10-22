#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        // First pass: find the candidate for majority element
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            count += (num == candidate) ? 1 : -1;
        }

        // Second pass: verify if candidate is actually the majority
        count = 0;
        for (int num : nums) {
            if (num == candidate) {
                count++;
            }
        }

        if (count > nums.size() / 2) {
            return candidate;
        } else {
            return -1; // No majority element exists
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 2, 3, 2, 4, 2, 5};
    int result = sol.majorityElement(nums);
    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "There is no majority element." << endl;
    }
    return 0;
}
