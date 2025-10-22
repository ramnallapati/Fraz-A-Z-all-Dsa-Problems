#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;

        for(const string& str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            mpp[key].push_back(str);
        }

        vector<vector<string>> result;
        for(auto& it : mpp) {
            result.push_back(it.second);
        }
        return result;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    vector<string> strs(n);

    cout << "Enter strings:\n";
    for(int i = 0; i < n; ++i) {
        cin >> strs[i];
    }

    vector<vector<string>> groups = sol.groupAnagrams(strs);

    cout << "Grouped anagrams:\n";
    for(const auto& group : groups) {
        for(const string& word : group) {
            cout << word << " ";
        }
        cout << "\n";
    }

    return 0;
}
