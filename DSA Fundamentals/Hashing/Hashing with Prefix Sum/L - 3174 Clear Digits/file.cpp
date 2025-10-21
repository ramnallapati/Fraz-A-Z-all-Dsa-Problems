#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        vector<char> result;

        for (char c : s) {
            if (c >= 'a' && c <= 'z')
                result.push_back(c);
            else
                if (!result.empty())
                    result.pop_back();
        }

        string ans = "";
        for (char c : result)
            ans += c;

        return ans;
    }
};

int main() {
    string s;
    cout << "Enter string (letters and digits): ";
    cin >> s;

    Solution sol;
    string cleared = sol.clearDigits(s);

    cout << "Result after clearing digits: " << cleared << endl;

    return 0;
}
