#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> freq;
        int max_value = 0;

        for (char c : s) {
            freq[c]++;
            max_value = max(max_value, freq[c]);
        }

        for (auto& it : freq) {
            if (it.second != max_value)
                return false;
        }
        return true;
    }
};

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    Solution sol;
    bool result = sol.areOccurrencesEqual(s);

    if (result)
        cout << "All characters have equal occurrences." << endl;
    else
        cout << "Characters do not have equal occurrences." << endl;

    return 0;
}
