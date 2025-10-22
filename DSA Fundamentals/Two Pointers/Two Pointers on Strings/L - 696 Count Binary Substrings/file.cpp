#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int countBinarySubstrings(string s) {
        
        int n = s.size();

        int prevGroup = 0;
        int currentGroup = 1;

        int result = 0;

        for(int i=1;i<n;i++){

            if(s[i]==s[i-1]){

                currentGroup++;

            }else {

                result += min(prevGroup,currentGroup);

                prevGroup = currentGroup;

                currentGroup = 1;
            }
        }

        result += min(prevGroup,currentGroup);

        return result;

    }
};

int main(){

  string str;

  cout<<"Enter the Binary string : ";
  cin>>str;

  Solution sol;

  int count_Binary_substrings = sol.countBinarySubstrings(str);

  cout<<"The Number of Binary substrings are : "<<count_Binary_substrings<<endl;

  return 0;


}