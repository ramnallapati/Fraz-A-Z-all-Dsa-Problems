



#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {

  cout<<"Enter the Number of Elements:"<<endl;
  int n;
  cin>>n;

  unordered_map<int,int>mpp;

  for(int i=0;i<n;i++) {

    int val;
    cin>>val;
    mpp[val]++;
  }

  int target_number;
  cout<<"Enter the target number for occurences: "<<endl;
  cin>>target_number;

  if(mpp.find(target_number)==mpp.end())cout<<"The Targeted number is not found in the array " <<endl;

  cout<<"The targeted number occurs in a " << mpp[target_number] << "times in a Array " <<endl;

  return 0;
}