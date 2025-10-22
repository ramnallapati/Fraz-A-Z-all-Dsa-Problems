#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        
        int n = s.size();

        int left = 0;
        int right = n-1;

        while(left <= right){

            if(s[left]!=s[right]){

                if(s[left]<=s[right]) {

                    s[right] = s[left];
                }
                else s[left] = s[right];
            }
            left++;
            right--;
        }

        return s;
    }
};


int main(){

  string str = "";
  cout<<"Enter the string : ";
  cin>>str;

  Solution sol;

  string res = sol.makeSmallestPalindrome(str);

  cout<<"The lexicograpically smallest palindrome is : "<<res<<endl;

  return 0;
}