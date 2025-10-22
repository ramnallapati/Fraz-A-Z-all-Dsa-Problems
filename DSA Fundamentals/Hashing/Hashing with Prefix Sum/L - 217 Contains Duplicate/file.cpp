#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for (int num : nums) {
            if (st.find(num) != st.end()) return true;
            st.insert(num);
        }
        return false;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int& x : nums) cin >> x;

    Solution sol;
    bool result = sol.containsDuplicate(nums);

    if (result)
        cout << "Vector contains duplicates.\n";
    else
        cout << "Vector does not contain duplicates.\n";

    return 0;
}
