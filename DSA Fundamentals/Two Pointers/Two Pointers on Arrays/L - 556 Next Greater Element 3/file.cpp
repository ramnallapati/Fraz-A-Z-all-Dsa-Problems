#include<iostream>
#include<algorithm>
#include<climits>
#include<cmath>

using namespace std;

class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int i = s.size() - 2;
        while (i >= 0 && s[i] >= s[i + 1]) i--;
        if (i < 0) return -1;
        int j = s.size() - 1;
        while (j >= 0 && s[j] <= s[i]) j--;
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
        long long result = stoll(s);
        return (result > INT_MAX) ? -1 : (int)result;
    }
};


int main(){

  int n;
  cout<<"Enter the value : ";
  cin>>n;

  Solution s;
  
  int result = s.nextGreaterElement(n);

  cout<<"The Next greater element of the value is : "<<result;

  return 0;
}