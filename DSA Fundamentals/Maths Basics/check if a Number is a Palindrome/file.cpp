
#include<iostream>
#include<climits>
#include<string>
#include<algorithm>
using namespace std;

int main(){

  int num;
  cout<<"Enter a Number : \n";
  cin>>num;

  string str = to_string(num);

  reverse(str.begin(),str.end());

  if(str == to_string(num))cout<<"Given number is a palindrome.";
  else cout<<"Given number is not a palindrome.";

  return 0;
}