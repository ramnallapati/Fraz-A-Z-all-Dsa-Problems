
#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int main() {

  int n;
  cout<<"Enter a value : ? \n";
  cin>>n;

  long long fact = 1;
  for(int i=2;i<=n;i++) {
    fact *= i;
  }
  int orginal_fact = fact;
  int trail_zeros = 0;
  for(int i=5;n/i>=1;i*=5) {
    trail_zeros += n/i;
  }

  cout<<"Given Number is : "<<n<<"\nFactorial of a Number is : "<<orginal_fact<<"\nNumber of trailing zeros of a given Number is: "<<trail_zeros<<endl;
  return 0;
}