
#include<iostream>
#include<climits>

using namespace std;

int main() {

  int num;
  cout<<"Enter the Number : \n";
  cin>>num;

  cout<<"After Reversing the Number: \n";
  int sum = 0;

  while(num>0) {
    int rem = num%10;
    sum = sum*10 + rem;
    num = num/10;
  }

  cout<<"Reversing the Number is: "<<sum<<endl;
  
}