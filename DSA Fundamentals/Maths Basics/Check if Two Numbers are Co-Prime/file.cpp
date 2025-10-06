

// co-prime = the Numbers are prime numbers and gcd of two prime numbers is 1.

#include<iostream>
#include<climits>
#include<cmath>

using namespace std;




int gcd(int a,int b) {

  a = abs(a);
  b = abs(b);
  while(b !=0) {
    int temp = b;
    b = a %b;
    a = temp;
  }
  return a;
}
int main() {

  int val1,val2;
  cout<<"Enter first Value : ";
  cin>>val1;
  cout<<"Enter second Value : ";
  cin>>val2;


  int gcd_val = gcd(val1,val2);

  if(gcd_val == 1) cout<<"The Given Prime Numbers are co-prime numbers.\n";
  else cout<<"The Given prime numbers are not co-prime numbers.\n";

  return 0;

}