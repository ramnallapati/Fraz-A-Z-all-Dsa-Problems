#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> mpp;
        int n = words.size();

        for(auto& str : words) {
            for(char ch : str) {
                mpp[ch]++;
            }
        }

        for(auto& it : mpp) {
            if(it.second % n != 0)
                return false;
        }

        return true;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    vector<string> words(n);

    cout << "Enter the strings:\n";
    for(int i = 0; i < n; i++) {
        cin >> words[i];
    }

    bool result = sol.makeEqual(words);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
