#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        
        int n = nums.size();

        sort(nums.begin(),nums.end());

        int slots_count = 0;

        int start_point = nums[0][0];
        int end_point = nums[0][1];

        for(int i=1;i<n;i++){

            if(nums[i][0]>end_point){

                slots_count += (end_point-start_point)+1;

                start_point = nums[i][0];
                end_point = nums[i][1];
            }
            else{
                end_point = max(end_point,nums[i][1]);
            }
        }

        slots_count += (end_point - start_point)+1;

        return slots_count;
    }
};

int main(){

  int n;
  cout<<"Enter the size of the array : \n";
  cin>>n;

  vector<vector<int>>arr(n,vector<int>(2,0));

  for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
      cin>>arr[i][j];
    }
  }

  Solution s;
  int max_points = s.numberOfPoints(arr);

  cout<<"The maximum of points that intersect with cars : \n"<<max_points<<endl;

  return 0;
}