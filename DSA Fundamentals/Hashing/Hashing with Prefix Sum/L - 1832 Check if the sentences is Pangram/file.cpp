#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> freq(26, 0);
        for (char ch : sentence) {
            if (ch >= 'a' && ch <= 'z') {
                freq[ch - 'a']++;
            }
            // If uppercase letters are possible, handle conversion:
            else if (ch >= 'A' && ch <= 'Z') {
                freq[ch - 'A']++;
            }
        }
        for (int count : freq) {
            if (count == 0) return false;
        }
        return true;
    }
};

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    Solution sol;
    bool isPangram = sol.checkIfPangram(sentence);

    if (isPangram)
        cout << "The sentence is a pangram." << endl;
    else
        cout << "The sentence is not a pangram." << endl;

    return 0;
}
