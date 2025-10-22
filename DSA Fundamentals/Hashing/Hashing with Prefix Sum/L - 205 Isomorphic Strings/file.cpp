#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        if (n != t.size()) return false;

        unordered_map<char, char> mpp1, mpp2;

        for (int i = 0; i < n; i++) {
            char c1 = s[i], c2 = t[i];

            if (mpp1.count(c1) && mpp1[c1] != c2)
                return false;

            if (mpp2.count(c2) && mpp2[c2] != c1)
                return false;

            mpp1[c1] = c2;
            mpp2[c2] = c1;
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

    bool result = sol.isIsomorphic(s, t);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
