
#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int gcd(int a,int b) {

  while(b != 0) {

    int temp = b;
    b = a%b;
    a = temp;
  }
  return a;
}
int main() {

  int a,b;
  cout<<"Enter a Value : "<<endl;
  cin>>a;
  cout<<"Enter b Value : "<<endl;
  cin>>b;

  cout<<"The Gcd of Two Numbers is : "<<gcd(a,b)<<endl;

  cout<<"The Lcm of two Numbers is : "<<((a*b)/gcd(a,b))<<endl;

}