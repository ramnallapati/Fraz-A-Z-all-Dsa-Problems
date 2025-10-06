
#include<iostream>
#include<climits>

using namespace std;

int main() {

  int num;
  cout<<"Enter a Number. \n";
  cin>>num;

  int sum = 0;

  while(num>0) {

    int rem = num%10;
    sum += sum *10 + rem;
    num = num/10;
  }

  cout<<"The sum of Digits of a Number is : "<<sum<<endl;
}