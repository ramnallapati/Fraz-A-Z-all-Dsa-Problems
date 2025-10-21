#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> mpp;
        int max_substring = -1;

        for (int i = 0; i < (int)s.size(); i++) {
            if (mpp.find(s[i]) != mpp.end()) {
                int length = i - mpp[s[i]];
                max_substring = max(max_substring, length - 1);
            } else {
                mpp[s[i]] = i;
            }
        }
        return max_substring;
    }
};

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    Solution sol;
    int result = sol.maxLengthBetweenEqualCharacters(s);

    cout << "Maximum length between two equal characters: " << result << endl;

    return 0;
}
