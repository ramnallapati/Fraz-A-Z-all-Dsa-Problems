#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        
        
        int n = nums.size();
        int prefixEnd = 0;
        
        while(prefixEnd + 1 < n && nums[prefixEnd] + 1 == nums[prefixEnd + 1]) {
            prefixEnd++;
        }
        
        int prefixSum = 0;
        for(int i = 0; i <= prefixEnd; i++) {
            prefixSum += nums[i];
        }
        
        unordered_set<int> st(nums.begin(), nums.end());
        
        int x = prefixSum;
        while(st.count(x)) x++;
        
        return x;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int result = sol.missingInteger(nums);
    cout << "Smallest missing integer >= sum of longest sequential prefix: " << result << endl;
    
    return 0;
}
