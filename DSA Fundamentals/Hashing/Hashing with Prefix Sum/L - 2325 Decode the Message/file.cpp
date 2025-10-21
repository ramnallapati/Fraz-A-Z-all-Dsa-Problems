#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mpp;
        char ch = 'a';

        for (char c : key) {
            if (c == ' ') continue;
            if (mpp.find(c) == mpp.end()) {
                mpp[c] = ch++;
            }
        }

        string result = "";
        for (char c : message) {
            if (c == ' ') {
                result += ' ';
            } else {
                result += mpp[c];
            }
        }

        return result;
    }
};

int main() {
    string key, message;
    cout << "Enter the key string: ";
    getline(cin, key);
    cout << "Enter the message to decode: ";
    getline(cin, message);

    Solution sol;
    string decoded = sol.decodeMessage(key, message);

    cout << "Decoded message: " << decoded << endl;

    return 0;
}
