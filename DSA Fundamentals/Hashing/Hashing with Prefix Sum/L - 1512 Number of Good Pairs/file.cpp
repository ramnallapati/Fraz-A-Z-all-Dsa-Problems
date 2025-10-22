#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (int num : nums) {
            mpp[num]++;
        }

        int count = 0;
        for (auto& it : mpp) {
            int freq = it.second;
            count += freq * (freq - 1) / 2;
        }

        return count;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    int result = sol.numIdenticalPairs(nums);

    cout << "Number of good pairs: " << result << endl;

    return 0;
}
