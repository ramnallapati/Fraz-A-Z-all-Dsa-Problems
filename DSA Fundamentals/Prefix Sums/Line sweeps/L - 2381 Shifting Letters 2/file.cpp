#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        
        int n = s.size();

        vector<int>diff(n+1,0);

        for(int i=0;i<shifts.size();i++){

            int start = shifts[i][0];
            int end = shifts[i][1];
            int dir = shifts[i][2];

            int val = (dir == 1) ? 1 : -1;

            diff[start] += val;
            diff[end+1] -= val;
        }

        string result;
        result.reserve(n);

        int current = 0;

        for(int i=0;i<n;i++){

            current += diff[i];

            int k = (((current%26) + 26) %26);

            char ch = char(((s[i]-'a' + k) %26) + 'a');

            result.push_back(ch); 
        }

        return result;
    }
};

int main() {

  string str;
  cout<<"Enter string : \n";
  cin>>str;

  int n;
  cout<<"Enter the shifting arr size : \n";
  cin>>n;

  vector<vector<int>>arr(n,vector<int>(3,0));

  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }

  Solution s;
  string result = s.shiftingLetters(str,arr);

  cout<<"The string after shifting : \n";
  
  for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
  }
  return 0;
}