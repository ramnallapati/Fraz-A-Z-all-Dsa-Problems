
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;



class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mpp;

        for (string &w : words)
            mpp[w]++;

        vector<pair<int, string>> freq;
        for (auto &it : mpp)
            freq.push_back({it.second, it.first});

        // Sort by frequency desc, then word asc
        sort(freq.begin(), freq.end(), [](auto &a, auto &b) {
            if (a.first == b.first)
                return a.second < b.second; // alphabetically smaller word first
            return a.first > b.first;       // higher frequency first
        });

        vector<string> result;
        for (int i = 0; i < k && i < freq.size(); i++) {
            result.push_back(freq[i].second);
        }

        return result;
    }
};

int main(){

  int n;
  cout<<"Enter no of words : ";
  cin>>n;

  vector<string>words(n);
  for(int i=0;i<n;i++){
    
    cin>>words[i];
  }

  int k;
  cout<<"Enter no of Top Elements : ";
  cin>>k;

  Solution s;

  vector<string>result = s.topKFrequent(words,k);

  cout<<"The Top k Frequent words are : \n";

  for(int i=0;i<result.size();i++){

    cout<<result[i]<<" ";
  }

  return 0;
}