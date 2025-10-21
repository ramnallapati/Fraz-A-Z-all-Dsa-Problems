#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n = nums.size();

        for(int i=0; i<n; i++) {
            mpp[nums[i]]++;
        }

        vector<int> result;
        for(auto &it : mpp) {
            if(it.second > n/3) {
                result.push_back(it.first);
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 3, 2, 2, 1, 1, 1, 4, 4, 4, 4}; // Example input
    vector<int> result = sol.majorityElement(nums);
    cout << "Elements occurring more than n/3 times: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
