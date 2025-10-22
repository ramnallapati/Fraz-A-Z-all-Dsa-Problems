
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        
        int n = chars.size();

        string compression = "";

        int count = 1;

        char ch = chars[0];

        for(int i=1;i<n;i++){

            if(chars[i]==ch){
                
                count++;
            }
            else {

                if(count > 1) compression += ch + to_string(count);
                else compression += ch;

                count = 1;
                ch = chars[i];
            }
        }

        if(count > 1) compression += ch + to_string(count);
        else compression += ch;

        for(int i=0;i<compression.size();i++){

            chars[i] = compression[i];
        }

        return compression.size();
        
    }
};


int main(){

  int n;
  cout<<"Enter the size of charecter array : ";
  cin>>n;

  vector<char>chars(n);
  for(int i=0;i<n;i++){
    cin>>chars[i];
  }

  Solution s;

  int min_length = s.compress(chars);

  cout<<"The compression array is : \n";

  for(int i=0;i<min_length;i++){

    cout<<chars[i]<<" ";
  }

  return 0;
}