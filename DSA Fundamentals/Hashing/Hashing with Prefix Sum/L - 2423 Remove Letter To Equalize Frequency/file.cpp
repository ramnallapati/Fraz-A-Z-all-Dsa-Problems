#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char,int> freq;
        for(char ch : word) freq[ch]++;

        for (auto& pair : freq) {
            char ch = pair.first;
            freq[ch]--;

            int target = 0;
            bool isEqual = true;

            for (auto& p : freq) {
                if(p.second == 0) continue;
                if(target == 0)
                    target = p.second;
                else if(target != p.second) {
                    isEqual = false;
                    break;
                }
            }

            if (isEqual) return true;

            freq[ch]++;
        }

        return false;
    }
};

int main() {
    string word;
    cout << "Enter string: ";
    cin >> word;

    Solution sol;
    cout << boolalpha << sol.equalFrequency(word) << endl;

    return 0;
}
