#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        int n = s.size();

        int low = 0;
        int high = n;

        vector<int>result;

        for(int i=0;i<n;i++){

            if(s[i]=='I'){

                result.push_back(low);
                low++;
            }
            if(s[i]=='D'){
                
                result.push_back(high);
                high--;
            }
        }

        while(low<=high){

            result.push_back(low);
            low++;
        }

        return result;
    }
};

int main(){

  string s;
  cout<<"Enter the string : ";
  cin>>s;

  Solution sol;
  
  vector<int>result = sol.diStringMatch(s);

  cout<<"After DI string Match : \n";
  
  for(int i=0;i<result.size();i++){
    
    cout<<result[i]<<" ";
  }

  return 0;
}