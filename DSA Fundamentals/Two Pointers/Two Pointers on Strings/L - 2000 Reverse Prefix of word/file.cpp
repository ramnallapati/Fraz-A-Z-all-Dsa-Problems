
#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int n = word.size();

        int i=0;

        for(i;i<n;i++){

            if(word[i]==ch)break;
        }

        if(i>=n)return word;
        
        reverse(word.begin(),word.begin()+i+1);

        return word;
    }
};

int main(){

  string s;
  cout<<"Enter the string : ";
  cin>>s;

  char ch;
  cout<<"Enter the charecter : ";
  cin>>ch;

  Solution sol;

  string res = sol.reversePrefix(s,ch);

  cout<<"Reverse Prefix of word is : "<<res<<endl;

  return 0;

}