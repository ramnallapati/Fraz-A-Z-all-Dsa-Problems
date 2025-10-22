



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

  vector<int>even_elements,odd_elements;

  for(int i=0;i<n;i++) {

    if(arr[i]%2 == 0) {
      even_elements.push_back(arr[i]);
    } else {
      odd_elements.push_back(arr[i]);
    }
  }

  cout<<"The Even Elements in an Array : "<<endl;
  for(int i=0;i<even_elements.size();i++) {

    cout<<even_elements[i] << " ";
  }

  cout<<"\n The Odd Elements in an Array : "<<endl;
  for(int i=0;i<odd_elements.size();i++) {

    cout<<odd_elements[i]<< " ";
  }

  return 0;
}