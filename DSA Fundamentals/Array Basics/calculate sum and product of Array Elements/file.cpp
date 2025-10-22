


#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main() {

  cout<<"Enter the Number of Elements:"<<endl;
  int n;
  cin>>n;

  vector<int>arr;

  int sum_array = 0;
  int product_array = 1;

  for(int i=0;i<n;i++) {
    int val;
    cin>>val;
    arr.push_back(val);
    sum_array += val;
    product_array *= val;
  }

  cout<<"Sum of an Array : "<<sum_array<<endl;
  cout<<"Product of an Array : "<<product_array<<endl;

  return 0;
}