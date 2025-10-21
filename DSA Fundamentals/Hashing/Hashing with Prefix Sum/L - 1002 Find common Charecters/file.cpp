#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<int> minFreq(26, INT_MAX);

        for (const string& word : words) {
            vector<int> freq(26, 0);
            for (char ch : word) {
                freq[ch - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                minFreq[i] = min(minFreq[i], freq[i]);
            }
        }

        vector<string> result;
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < minFreq[i]; j++) {
                result.push_back(string(1, 'a' + i));
            }
        }
        return result;
    }
};

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    vector<string> words(n);
    cout << "Enter words:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    Solution sol;
    vector<string> common = sol.commonChars(words);

    cout << "Common characters including duplicates:\n";
    for (const string& ch : common) {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}
