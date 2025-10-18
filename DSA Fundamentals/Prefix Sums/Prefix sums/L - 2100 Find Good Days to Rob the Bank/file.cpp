#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        int n = security.size();
        vector<int> result;

        if (time == 0) {
            for (int i = 0; i < n; i++)
                result.push_back(i);
            return result;
        }

        if (n < 2 * time + 1)
            return {};

        // left[i] = number of consecutive non-increasing days ending at i
        vector<int> left(n, 0);
        for (int i = 1; i < n; i++) {
            if (security[i] <= security[i - 1])
                left[i] = left[i - 1] + 1;
        }

        // right[i] = number of consecutive non-decreasing days starting at i
        vector<int> right(n, 0);
        for (int i = n - 2; i >= 0; i--) {
            if (security[i] <= security[i + 1])
                right[i] = right[i + 1] + 1;
        }

        for (int i = time; i < n - time; i++) {
            if (left[i] >= time && right[i] >= time)
                result.push_back(i);
        }

        return result;
    }
};


int main() {

  int n;
  cout<<"Enter the security array size : ";
  cin>>n;
  
  vector<int>security(n);
  for(int i=0;i<n;i++) {
    cin>>security[i];
  }

  int time;
  cout<<"Enter the required time : ";
  cin>>time;

  Solution s;

  vector<int>result = s.goodDaysToRobBank(security,time);

  cout<<"The NO of hours to rob the house is : \n";
  
  for(int i=0;i<result.size();i++){

    cout<<result[i]<<" ";
  }

  return 0;
}