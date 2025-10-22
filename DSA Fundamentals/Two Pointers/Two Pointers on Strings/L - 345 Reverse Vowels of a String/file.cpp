#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        
        int n = s.size();

        unordered_set<char>st = {'a','e','i','o','u','A','E','I','O','U'};

        int left = 0;
        int right = n-1;

        while(left < right){

            while(left<right && st.find(s[left])==st.end())left++;
            while(left<right && st.find(s[right])==st.end())right--;

            swap(s[left],s[right]);

            left++;
            right--;
        }

        return s;
    }
};

int main(){

  string str;
  cout<<"Enter the string : ";
  cin>>str;

  Solution sol;
  string res = sol.reverseVowels(str);

  cout<<"After Reverse the vowels in a string : "<<res<<endl;

  return 0;
}