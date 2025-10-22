#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream stream(s);
        vector<string> result;
        string word;
        while(stream >> word) {
            result.push_back(word);
        }
        if(pattern.size() != result.size()) return false;

        unordered_map<char,string> charToWord;
        unordered_map<string,char> wordToChar;

        for(int i = 0; i < pattern.size(); i++) {
            if(charToWord.count(pattern[i]) && charToWord[pattern[i]] != result[i]) return false;
            if(wordToChar.count(result[i]) && wordToChar[result[i]] != pattern[i]) return false;
            charToWord[pattern[i]] = result[i];
            wordToChar[result[i]] = pattern[i];
        }
        return true;
    }
};

int main() {
    Solution sol;
    string pattern, s;
    cout << "Enter pattern: ";
    cin >> pattern;
    cin.ignore(); // Flush newline
    cout << "Enter string: ";
    getline(cin, s);

    bool ans = sol.wordPattern(pattern, s);
    cout << (ans ? "true" : "false") << endl;

    return 0;
}
