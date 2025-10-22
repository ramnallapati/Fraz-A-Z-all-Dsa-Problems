#include <iostream>
#include <string>
#include <unordered_map>
#include <cstdlib> // for abs()
using namespace std;

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> mpp;

        for (int i = 0; i < (int)t.size(); i++) {
            mpp[t[i]] = i;
        }

        int count = 0;
        for (int i = 0; i < (int)s.size(); i++) {
            count += abs(i - mpp[s[i]]);
        }

        return count;
    }
};

int main() {
    string s, t;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;

    if (s.size() != t.size()) {
        cout << "Strings must be of the same length." << endl;
        return 1;
    }

    Solution sol;
    int result = sol.findPermutationDifference(s, t);
    cout << "Sum of absolute index differences: " << result << endl;

    return 0;
}
