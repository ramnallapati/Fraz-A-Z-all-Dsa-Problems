#include <iostream>
#include <string>
#include<vector>
using namespace std;

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()) return false;
        if(s == goal) {
            vector<int> freq(26, 0);
            for(char ch : s) {
                freq[ch - 'a']++;
                if(freq[ch - 'a'] > 1) return true;
            }
            return false;
        }
        vector<int> diff_index;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != goal[i]) diff_index.push_back(i);
        }
        if(diff_index.size() != 2) return false;
        int i = diff_index[0], j = diff_index[1];
        return (s[i] == goal[j] && s[j] == goal[i]);
    }
};

int main() {
    string s, goal;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> goal;
    
    Solution sol;
    bool result = sol.buddyStrings(s, goal);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
