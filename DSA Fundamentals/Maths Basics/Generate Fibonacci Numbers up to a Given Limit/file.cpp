
#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

  int n;
  cout<<"Enter the Value : ? \n";
  cin>>n;
  vector<int>arr(n+1,0);
  arr[1] = 1;
  for(int i=2;i<=n;i++) {
    arr[i] = arr[i-1]+arr[i-2];
  }

  cout<<"The fibonacci numbers are : \n";
  for(int i=0;i<=n;i++) {
    cout<<arr[i]<<" ";
  }
  return 0;
}