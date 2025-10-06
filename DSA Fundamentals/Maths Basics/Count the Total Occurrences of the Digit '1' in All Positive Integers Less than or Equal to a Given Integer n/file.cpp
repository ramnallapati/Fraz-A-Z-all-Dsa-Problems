

// Fibonacci number is f[n] = f[n-1]+f[n-2];
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main() {

  int n;
  cout<<"Enter the Value : ";
  cin>>n;

  int count_ones = 0;

  for(int i=1;i<=n;i++) {

    int val = i;
    while(val >=1) {
      int rem = val%10;
      if(rem == 1){
        count_ones++;
        break;
      }
      val = val/10;
    }
  }

  cout<<"The Number of Ones in all Digits is : "<<count_ones<<endl;
  return 0;
}