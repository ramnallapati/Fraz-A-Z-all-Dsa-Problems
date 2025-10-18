
#include<iostream>
#include<string>
#include<climits>

using namespace std;

class Solution {
public:
    long long minimumSteps(string s) {
        
        long long zeros = 0;
        long long count = 0;

        for(char c : s){

            if(c=='1')zeros++;
            else count += zeros;
        }

        return count;
    }
};

int main(){

  cout<<"Enter the string : ";
  string str;
  cin>>str;

  Solution s;
  long long min_steps = s.minimumSteps(str);

  cout<<"The Minimum no of steps taken to move all ones left side is : "<<min_steps<<endl;

  return 0;
}
