
#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int left,int right,string s){

        while(left <= right){

            if(s[left]!=s[right])return false;

            left++;
            right--;
        }

        return true;
    }
    bool validPalindrome(string s) {
        
        int n = s.size();

        int left = 0;
        int right = n-1;

        while(left <= right){

            if(s[left] != s[right]){

                return isPalindrome(left+1,right,s) || isPalindrome(left,right-1,s);
            }
            left++;
            right--;
        }

        return true;
    }
};

int main(){

  string str = "";
  cout<<"Enter the string : ";
  cin>>str;

  Solution sol;

  bool isPalindrome = sol.validPalindrome(str);

  cout<<"The give string is a Palindrome : "<<isPalindrome<<endl;

  return 0;

}