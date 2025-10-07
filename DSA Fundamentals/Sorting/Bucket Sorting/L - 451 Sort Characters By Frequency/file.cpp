
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_map>

using namespace std;


class Solution {
public:
    string frequencySort(string s) {
        
        int n = s.size();

        unordered_map<char,int>mpp;

        for(int i=0;i<s.size();i++)mpp[s[i]]++;

        vector<pair<int,char>>freq;

        for(auto it:mpp)freq.push_back({it.second,it.first});

        sort(freq.rbegin(),freq.rend());

        string result = "";

        for(auto it:freq){

            for(int i=0;i<it.first;i++){
                result += it.second;
            }
        }

        return result;
    }
};


int main(){

  string res = "";
  cout<<"Enter the string : ";
  getline(cin, res);

  Solution s;

  string result = s.frequencySort(res);

  cout<<"String After Frequency sorting : \n";
  for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
  }

  return 0;

}