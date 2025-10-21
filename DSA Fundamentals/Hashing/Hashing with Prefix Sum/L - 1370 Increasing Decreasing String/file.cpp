#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string sortString(string s) {
        int n = s.size();
        vector<int> freq(26, 0);

        for(int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }

        int size = n;
        int count = 1;
        string result = "";

        while(size) {
            string temp = "";

            for(int i = 0; i < 26; i++) {
                if(freq[i] > 0) {
                    temp += string(1, 'a' + i);
                    freq[i]--;
                    size--;
                }
            }

            if(count % 2 == 0)
                reverse(temp.begin(), temp.end());

            result += temp;
            count++;
        }

        return result;
    }
};

int main() {
    string s;
    cout << "Enter string to sort: ";
    cin >> s;

    Solution sol;
    string sorted = sol.sortString(s);

    cout << "Sorted string: " << sorted << endl;

    return 0;
}
