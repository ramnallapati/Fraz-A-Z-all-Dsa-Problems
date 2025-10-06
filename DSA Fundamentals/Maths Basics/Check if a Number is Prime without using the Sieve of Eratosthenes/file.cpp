
#include<iostream>
#include<climits>
#include<cmath>
using namespace std;

int main() {

  int n;
  cout<<"Enter the Value : ";
  cin>>n;

  if(n == 2)cout<<"The Given number is a prime Number\n";

  // all even numbers are prime numbers except 2
  if(n%2 == 0)cout<<"The Given number is not a prime Number"<<endl;

  bool isFactorsFound = false;

  int limit = static_cast<int>(sqrt(n));

  for(int i=3;i<=limit;i++) {

    if(n%i == 0) {
      isFactorsFound = true;
      break;
    }
  }

  if(isFactorsFound) cout<<"The Given Number is not a Prime Nummber";
  else cout<<"The Given number is a Prime Number\n";

  return 0;
}