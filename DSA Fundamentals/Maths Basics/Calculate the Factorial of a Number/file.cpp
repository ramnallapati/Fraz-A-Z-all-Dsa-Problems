
#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int main() {

  int n;
  cout<<"Enter a value : \n";
  cin>>n;

  long long fact = 1;
  for(int i=2;i<=n;i++) {
    fact *= i;
  }

  cout<<"The Factorial of given number is : "<<fact<<endl;
  return 0;
}