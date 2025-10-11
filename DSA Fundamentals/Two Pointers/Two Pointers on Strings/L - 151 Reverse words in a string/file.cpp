#include<iostream>
#include<string>


using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string result = "";
        int i = n - 1;

        while (i >= 0) {
            // Skip trailing spaces
            while (i >= 0 && s[i] == ' ') i--;
            if (i < 0) break;

            string temp = "";
            // Collect current word
            while (i >= 0 && s[i] != ' ') {
                temp = s[i] + temp;
                i--;
            }

            // Append to result
            if (!result.empty()) result += " ";
            result += temp;
        }

        return result;
    }
};


int main(){

  string str;
  cout<<"Enter the words of string : ";
  getline(cin,str);

  Solution sol;
  string res = sol.reverseWords(str);

  cout<<"Reverse words in a string : "<<res<<endl;

  return 0;
}