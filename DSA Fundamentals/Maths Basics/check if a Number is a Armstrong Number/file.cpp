
#include<iostream>
#include<climits>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {

  int num;
  cout<<"Enter a Number: \n";
  cin>>num;

  int original = num;

  int temp = num;
  int no_digits = 0;
  while(temp >0) {
    no_digits++;
    temp = temp/10;
  }

  int sum = 0;
  while(num>0) {

    int rem = num%10;
    sum += static_cast<int>(pow(rem, no_digits) + 0.5);
    num = num/10;
  }

  if(sum == original)cout<<"The Given number is a Armstrong Number.";
  else cout<<"The Given number is not a Armstrong Number.";

  return 0;
}