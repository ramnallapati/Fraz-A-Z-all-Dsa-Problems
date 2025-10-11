#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.size();


        int left = 0;
        int right = n-1;

        while(left < right){

            // Removing an extra spaces
            while(left<right && !isalnum(s[left]))left++;
            while(left<right && !isalnum(s[right]))right--;

            if(tolower(s[left])!=tolower(s[right]))return false;

            left++;
            right--;
        }

        return true;

    }
};

int main(){

  string str = "";
  cout<<"Enter the string : ";
  getline(cin,str);

  Solution sol;

  bool isPalindrome = sol.isPalindrome(str);

  cout<<"The Given string is a Palindrome : "<<isPalindrome<<endl;

  return 0;

}