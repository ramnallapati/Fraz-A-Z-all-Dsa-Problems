#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        
        int n = s.size();

        int left = 0;
        int right = n-1;

        while(left < right){


            if(s[left] != s[right])break;

            int ch = s[left];

            while(left<=right && s[left]==ch)left++;
            while(left<=right && s[right]==ch)right--;
        }

        return (right-left)+1;
    }
};

int main(){

  string str;
  cout<<"Enter the string : ";
  cin>>str;

  Solution s;

  int min_length = s.minimumLength(str);

  cout<<"The Minimum length of the string after deleting similar ends : "<<min_length<<endl;

  return 0;
}