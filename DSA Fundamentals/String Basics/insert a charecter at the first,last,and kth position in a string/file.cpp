
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {

  cout<<"Enter the string:"<<endl;
  string s;
  getline(cin,s);

  cout<<"Enter Inserted charecter:"<<endl;
  char inserted_char;
  cin>>inserted_char;

  cout<<"Insert a new Charecter at position. \n1.first \n2.middle \n3.Last"<<endl;

  int val;
  cin>>val;

  if(val == 1) {

    s.insert(s.begin(), inserted_char);
    cout<<s<<endl;
  }
  else if(val == 2) {

    int inserted_index;
    cout<<"Enter the inserted index:"<<endl;
    cin>>inserted_index;

    if(inserted_index >= s.size()) {
      cout<<"You Enter the inserted index greater than the size of string ."<<endl;
    }
    s.insert(s.begin()+inserted_index,inserted_char);
    cout<<s<<endl;

  } else if(val == 3) {
    s.insert(s.end(),inserted_char);

    cout<<s<<endl;
  }
  else {
    cout<<"You Enter the  wrong number. Please choose correct one."<<endl;
  }

  return 0;

}