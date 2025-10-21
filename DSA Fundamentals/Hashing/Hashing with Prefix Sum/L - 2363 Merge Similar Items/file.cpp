
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        int n = items1.size();
        int m = items2.size();

        map<int, int> mpp;

        for (int i = 0; i < n; i++) mpp[items1[i][0]] = items1[i][1];

        for (int i = 0; i < m; i++) {
            if (mpp.find(items2[i][0]) != mpp.end()) {
                auto it = mpp.find(items2[i][0]);
                it->second += items2[i][1];
            } else {
                mpp[items2[i][0]] = items2[i][1];
            }
        }

        vector<vector<int>> result;
        for (auto &it : mpp) {
            result.push_back({it.first, it.second});
        }
        return result;
    }
};

int main() {
    int n1, n2;
    cout << "Enter size of items1: ";
    cin >> n1;
    vector<vector<int>> items1(n1, vector<int>(2));
    cout << "Enter items1 (key value pairs):\n";
    for (int i = 0; i < n1; i++) {
        cin >> items1[i][0] >> items1[i][1];
    }

    cout << "Enter size of items2: ";
    cin >> n2;
    vector<vector<int>> items2(n2, vector<int>(2));
    cout << "Enter items2 (key value pairs):\n";
    for (int i = 0; i < n2; i++) {
        cin >> items2[i][0] >> items2[i][1];
    }

    Solution sol;
    vector<vector<int>> merged = sol.mergeSimilarItems(items1, items2);

    cout << "Merged similar items:\n";
    for (const auto& item : merged) {
        cout << item[0] << " " << item[1] << "\n";
    }
    return 0;
}
