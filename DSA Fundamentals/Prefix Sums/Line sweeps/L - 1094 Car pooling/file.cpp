
#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        
        
        map<int,int>mpp;

        for(int i=0;i<trips.size();i++){

            mpp[trips[i][1]] += trips[i][0];
            mpp[trips[i][2]] -= trips[i][0];

        }

        int current_capacity = 0;
        for(auto it:mpp){

            current_capacity += it.second;

            if(current_capacity > capacity)return false;
        }

        return true;
    }
};

int main(){

  int n;
  cout<<"Enter the trip array size : \n";
  cin>>n;

  vector<vector<int>>trips(n,vector<int>(3,0));

  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin>>trips[i][j];
    }
  }

  int capacity;
  cout<<"Enter the capacity of the vechile : \n";
  cin>>capacity;

  Solution s;

  bool all_passengers_travel = s.carPooling(trips,capacity);

  cout<<"All the Passengers can reach their homes : \n"<<all_passengers_travel<<endl;

  return 0;
}