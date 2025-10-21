#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }

        for (auto it : mpp) {
            if (it.second == 1) sum += it.first;
        }

        return sum;
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
    int result = sol.sumOfUnique(nums);
    cout << "Sum of unique elements: " << result << endl;

    return 0;
}
