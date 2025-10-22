#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int num : nums)
            mpp[num]++;

        vector<int> result;
        for(auto it : mpp) {
            int val = it.first;
            int count = it.second;

            if(count == 1 && !mpp.count(val - 1) && !mpp.count(val + 1))
                result.push_back(val);
        }

        return result;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> lonelyNumbers = sol.findLonely(nums);
    
    cout << "Lonely numbers are: ";
    for(int num : lonelyNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
