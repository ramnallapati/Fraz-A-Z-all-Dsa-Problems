#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> freq(26, 0);

        for (char c : t) {
            freq[c - 'a']++;
        }

        for (char c : s) {
            freq[c - 'a']--;
            if (freq[c - 'a'] < 0) return false;
        }

        for (int count : freq) {
            if (count != 0) return false;
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s, t;

    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    bool result = sol.isAnagram(s, t);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
