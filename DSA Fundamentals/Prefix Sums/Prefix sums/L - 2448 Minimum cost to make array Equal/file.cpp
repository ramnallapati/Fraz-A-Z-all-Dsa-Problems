
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        
        // step 1 :

        int n = nums.size();
        int m = cost.size();

        vector<pair<int,int>>arr;

        for(int i=0;i<n;i++) {

            arr.push_back({nums[i],cost[i]});
        }

        sort(arr.begin(),arr.end());

        // step 2 : 
        
        long long total_cost = 0;

        for(auto p:arr)total_cost += p.second;



        // step 3:

        long long half = (total_cost + 1)/2;

        long long target = 0;
        
        long long cummulative = 0;

        // step 4:

        for(auto p:arr){

            cummulative += p.second;

            if(cummulative >= half){

                target = p.first;
                break;
            }
        }

        // step 4 : 
        long long min_cost = 0;

        for(auto p : arr) {

            min_cost += (long long)abs(p.first-target)*p.second;
        }

        return min_cost;
    }
};

int main(){

  int n;
  cout<<"Enter the size of arr : \n";
  cin>>n;

  vector<int>arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];


  int m ;
  cout<<"Enter the size of cost array : \n";
  cin>>m;
  
  vector<int>cost(m);
  for(int i=0;i<m;i++)cin>>cost[i];

  Solution s;

  long long min_cost = s.minCost(arr,cost);

  cout<<"The minimum cost to make array Equal is : "<<min_cost<<endl;


  return 0;

}