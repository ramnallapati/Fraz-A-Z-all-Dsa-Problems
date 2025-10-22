#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        vector<string> result;
        result.push_back(words[0]);

        for(int i = 1; i < n; i++) {
            string prev = result.back();
            string curr = words[i];

            sort(prev.begin(), prev.end());
            sort(curr.begin(), curr.end());

            if(prev != curr)
                result.push_back(words[i]);
        }
        return result;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    vector<string> words(n);

    cout << "Enter words:\n";
    for(int i = 0; i < n; i++) {
        cin >> words[i];
    }

    vector<string> result = sol.removeAnagrams(words);

    cout << "Result after removing consecutive anagrams:\n";
    for(const string& word : result) {
        cout << word << "\n";
    }

    return 0;
}
