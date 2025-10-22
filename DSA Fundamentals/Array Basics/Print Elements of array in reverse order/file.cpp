


#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main() {

  cout<<"Enter the Number of Elements:"<<endl;
  int n;
  cin>>n;

  vector<int>arr;

  for(int i=0;i<n;i++) {

    cout<<"Enter the element:"<<endl;
    int val;
    cin>>val;
    arr.push_back(val);
  }

  cout<<"The array Elements are in Reverse order: "<<endl;

  for(int i=n-1;i>=0;i--) {

    cout<<"Index : " << i << " Element : "<<arr[i]<<endl;

  }

  return 0;
}