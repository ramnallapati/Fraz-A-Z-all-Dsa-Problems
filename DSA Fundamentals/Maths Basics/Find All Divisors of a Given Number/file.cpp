
#include<iostream>
#include<climits>
#include<cmath>

using namespace std;

int main() {

  int n;
  cout<<"Enter a Value : ";
  cin>>n;

  int limit = static_cast<int>(sqrt(n));

  cout<<"The Divisors of all the numbers is : \n";

  for(int i=1;i<=limit;i++) {

    if(n%i == 0)cout<<i<<" ";
  }

  return 0;
}