#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();

        string result = "";

        for(int i=0;i<n;i++){

            // remove extra spaces
            while(i<n && s[i]==' ')i++;
            
            if(i>=n)break;

            string temp = "";

            while(i<n && s[i]!=' '){

                temp = s[i]+temp;
                i++;
            }

            if(!result.empty()) result += " ";

            result += temp;
        }

        return result;
    }
};

int main(){

  string str = "";
  cout<<"Enter the string : ";
  getline(cin,str);

  Solution sol;

  string result = sol.reverseWords(str);

  cout<<"After reverse words in string is : "<<result<<endl;

  return 0;
}