#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        int n = s.size();

        vector<int>result(n);

        // from left to right;

        int dis = n;

        for(int i=0;i<n;i++){

            if(s[i]==c)dis = i;

            result[i] = abs(dis-i);
        }

        // from right to left;

        int dist1 = 0;
        
        for(int i=n-1;i>=0;i--){

            if(s[i]==c)dist1 = i;

            result[i] = min(result[i],abs(dist1-i));
        }

        return result;
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

  vector<int>result = sol.shortestToChar(s,ch);

  cout<<"The Shortest Distance to the Charecter is : \n";

  for(int i=0;i<result.size();i++){

    cout<<result[i]<<" ";
  }

  return 0;
}