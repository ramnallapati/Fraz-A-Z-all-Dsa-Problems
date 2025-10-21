#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype> // for tolower
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> mpp;
        int n = word.size();

        for(int i=0;i<n;i++){
            if(word[i]>='a' && word[i]<='z') mpp[word[i]] = i;
        }

        int count = 0;

        for(int i=0;i<n;i++){
            if(word[i]>='A' && word[i]<='Z'){
                char lower = tolower(word[i]);
                if(mpp.find(lower) == mpp.end()) continue;
                if(mpp[lower] < i) count++;
                mpp.erase(lower);
            }
        }
        return count;
    }
};

int main() {
    string word;
    cout << "Enter a word: ";
    getline(cin, word);

    Solution sol;
    int result = sol.numberOfSpecialChars(word);

    cout << "Number of special uppercase characters: " << result << endl;

    return 0;
}
