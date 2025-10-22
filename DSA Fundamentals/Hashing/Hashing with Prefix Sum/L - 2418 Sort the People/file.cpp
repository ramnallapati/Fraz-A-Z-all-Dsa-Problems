#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    static bool cmp(pair<int, string>& a, pair<int, string>& b) {
        if (a.first == b.first) return a.second < b.second;
        return a.first > b.first;
    }

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> result;

        for (int i = 0; i < (int)names.size(); i++) {
            result.push_back({heights[i], names[i]});
        }

        sort(result.begin(), result.end(), cmp);

        vector<string> ans;
        for (auto& p : result) {
            ans.push_back(p.second);
        }

        return ans;
    }
};

int main() {
    int n;
    cout << "Enter number of people: ";
    cin >> n;

    vector<string> names(n);
    vector<int> heights(n);

    cout << "Enter names:\n";
    for (int i = 0; i < n; i++) cin >> names[i];

    cout << "Enter heights:\n";
    for (int i = 0; i < n; i++) cin >> heights[i];

    Solution sol;
    vector<string> sortedNames = sol.sortPeople(names, heights);

    cout << "Sorted names by height descending, name ascending:\n";
    for (const string& name : sortedNames) {
        cout << name << "\n";
    }

    return 0;
}
