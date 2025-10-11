#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        string mergeAlternately(string word1, string word2)
        {

            int n = word1.size();
            int m = word2.size();

            int i = 0, j = 0;

            string result = "";

            while (i < n && j < m)
            {

                result += word1[i];
                result += word2[j];

                i++;
                j++;
            }

            while (i < n)
            {

                result += word1[i];
                i++;
            }

            while (j < m)
            {

                result += word2[j];
                j++;
            }

            return result;
        }
};

int main(){

  string word1,word2;

  cout<<"Enter the string1 and string2 : ";
  cin>>word1>>word2;

  Solution sol;

  string result = sol.mergeAlternately(word1,word2);

  cout<<"The strings are merging Alternatively : "<<result<<endl;

  return 0;
}