#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        
        reverse(s.begin(),s.end());
    }
};

int main(){

  int n;
  cout<<"Enter a size of charecter array : ";
  cin>>n;

  vector<char> arr(n);

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  Solution sol;
  sol.reverseString(arr);


  cout<<"After Reversing the charecter array : \n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;

}