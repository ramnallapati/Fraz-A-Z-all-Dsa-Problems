#include<bits/stdc++.h>
#include<string>
using namespace std;


int main() {

  string str;

  cout<<"Enter a string"<<endl;

  cin>>str;

  int no_of_vowels = 0;
  int no_of_consonants = 0;

  for(int i=0;i<str.size();i++) {

    if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U') {
      no_of_vowels++;
    }
    else {
      no_of_consonants++;
    }
  }

  cout<<"Diffrences between no of vowels and consonants.\n";
  cout<<abs(no_of_vowels - no_of_consonants)<<endl;
  return 0;
}