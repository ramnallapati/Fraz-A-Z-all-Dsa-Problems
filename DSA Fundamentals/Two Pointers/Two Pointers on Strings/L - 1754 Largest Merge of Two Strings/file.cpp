#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    string largestMerge(string word1, string word2) {
        
        int n = word1.size();
        int m = word2.size();

        string result = "";

        int i=0,j=0;

        while(i<n && j<m){

            if(word1.substr(i) > word2.substr(j)){

                result += word1[i++];
            }
            else result += word2[j++];
        }

        result += word1.substr(i);
        result += word2.substr(j);

        return result;
    }
};

int main(){

  string word1,word2;
  cout<<"Enter string1 and string2 : ";
  cin>>word1>>word2;

  Solution sol;
  
  string result = sol.largestMerge(word1,word2);

  cout<<"Larget Merge of Two strings is : "<<result<<endl;
  
  return 0;


}