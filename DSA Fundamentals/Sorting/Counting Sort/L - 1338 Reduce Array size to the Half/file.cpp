#include<iostream>
#include<climits>
#include<cmath>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        int n = arr.size();

        unordered_map<int,int>mpp;

        for(int i=0;i<n;i++)mpp[arr[i]]++;

        vector<int>count;

        for(auto it:mpp) {
            
            count.push_back(it.second);
        }

        // sort the elements in descending order
        sort(count.rbegin(),count.rend());

        int ans = 0;

        int removed = 0;

        for(int i=0;i<count.size();i++){

            removed += count[i];
            ans++;

            if(removed >= n/2)break;
        }

        return ans;


    }
};


int main() {

  int n;
  cout<<"Enter the no of Elements : ";
  cin>>n;

  vector<int>arr(n);
  for(int i=0;i<n;i++) {
    int val;
    cin>>val;
    arr[i] = val;
  }

  Solution s;

  int min_elements = s.minSetSize(arr);

  cout<<"The Minimum No of Elements to reduce the half of the array is : "<<min_elements<<endl;

  return 0;
}