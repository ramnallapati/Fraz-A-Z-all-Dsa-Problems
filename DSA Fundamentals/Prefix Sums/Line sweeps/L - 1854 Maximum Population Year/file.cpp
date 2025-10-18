#include<iostream>
#include<map>
#include<vector>

using namespace std;

class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        
        int n = logs.size();

        map<int,int>mpp;

        for(int i=0;i<n;i++) {

            mpp[logs[i][0]]++;

            mpp[logs[i][1]]--;
        }

        int max_pop = 0,pop_year = 0, curr_pop = 0;

        for(auto it:mpp){

            curr_pop += it.second;

            if(curr_pop > max_pop) {

                max_pop = curr_pop;
                pop_year = it.first;
            }
        }

        return pop_year;
    }
};

int main() {

  int n;
  cout<<"Enter the size of the array : \n";
  cin>>n;

  vector<vector<int>>logs(n,vector<int>(2,0));

  for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){

      cin>>logs[i][j];
    }
  }

  Solution s;

  int max_pop_year = s.maximumPopulation(logs);

  cout<<"The maximum population year is : "<<max_pop_year<<endl;

  return 0;
}