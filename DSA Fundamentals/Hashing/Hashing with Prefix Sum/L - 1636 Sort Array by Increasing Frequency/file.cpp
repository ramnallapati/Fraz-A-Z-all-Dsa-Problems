#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    static bool cmp(pair<int,int>& a, pair<int,int>& b) {
        if (a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    }

    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> mpp;
        for (int num : nums) mpp[num]++;
        
        vector<pair<int,int>> freq_array;
        for (auto it : mpp) {
            freq_array.push_back({it.second, it.first});
        }

        sort(freq_array.begin(), freq_array.end(), cmp);

        vector<int> result;
        for (auto& p : freq_array) {
            for (int j = 0; j < p.first; j++) {
                result.push_back(p.second);
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
    cout << "Enter the elements:\n";
    for (int &x : nums) cin >> x;

    Solution sol;
    vector<int> sorted = sol.frequencySort(nums);

    cout << "Sorted by frequency and value:\n";
    for (int val : sorted) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
