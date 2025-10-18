#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    int bestClosingTime(string customers) {
        
        int n = customers.size();

        int min_penalty = 0;
        
        for(int i=0;i<n;i++) {

            if(customers[i] == 'Y') min_penalty++;
        }

        int current_penalty = min_penalty;
        int best_hour = 0;

        for(int i=0;i<n;i++) {

            if(customers[i] == 'Y') {
                current_penalty--;
            }
            else {
                current_penalty++;
            }

            if(current_penalty < min_penalty) {

                min_penalty = current_penalty;
                best_hour = i+1;
            }
        }
        return best_hour;
    }
};

int main() {

  cout<<"Enter the string : ";
  string str;
  cin>>str;

  Solution s;
  int best_hour = s.bestClosingTime(str);

  cout<<"The best time to close the shop is : "<<best_hour<<endl;

  return 0;
}