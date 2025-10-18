#include<iostream>
#include<vector>
#include<unordered_set>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();

        vector<int>count_vowels(n,0);

        unordered_set<char>st({'a','e','i','o','u'});

        int count = 0;

        for(int i=0;i<n;i++) {

            string str = words[i];

            if(st.find(str[0])!=st.end() && st.find(str[str.size()-1]) != st.end()) {

                count++;
            }
            count_vowels[i] = count;
        }

        int m = queries.size();

        vector<int>result(m,0);

        for(int i=0;i<m;i++) {

            int start_index = queries[i][0];
            int end_index = queries[i][1];

            int total_vowels = count_vowels[end_index];

            int remaing_vowels = (start_index == 0) ? 0 : count_vowels[start_index-1];

            result[i] = total_vowels - remaing_vowels;

        }

        return result;

    }
};

int main() {

  int n;
  cout<<"Enter the size of words string array : ";
  cin>>n;
  vector<string>words(n);
  for(int i=0;i<n;i++) {
    string str;
    cin>>str;
    words[i] = str;
  }

  int m;
  cout<<"Enter the size of query : ";
  cin>>m;

  vector<vector<int>>queries(m);
  
  for(int i=0;i<m;i++){
    int start,end;
    cin>>start>>end;
    queries[i] = {start,end};
  }

  Solution s;

  vector<int>result = s.vowelStrings(words,queries);

  cout<<"The no of vowels in the range is : \n";

  for(int i=0;i<m;i++) {
    cout<<result[i]<<" ";
  }

  return 0;
}