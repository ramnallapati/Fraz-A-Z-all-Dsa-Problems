#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int> st;
        vector<int> result;
        for (int num : nums) {
            if (st.find(num) != st.end()) {
                result.push_back(num);
            } else {
                st.insert(num);
            }
        }
        return result;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int &x : nums) cin >> x;

    Solution sol;
    vector<int> duplicates = sol.findDuplicates(nums);

    if (duplicates.empty()) {
        cout << "No duplicates found.\n";
    } else {
        cout << "Duplicate elements:\n";
        for (int val : duplicates) cout << val << " ";
        cout << endl;
    }
    return 0;
}
