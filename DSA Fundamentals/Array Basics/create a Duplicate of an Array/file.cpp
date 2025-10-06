



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

  vector<int>duplicate_arr = arr;
  
  for(int i=0;i<n;i++) {

    cout<<duplicate_arr[i]<< " ";
  }
  return 0;
}