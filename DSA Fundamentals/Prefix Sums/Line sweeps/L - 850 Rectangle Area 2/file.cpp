#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
#include<cmath>

using namespace std;

class Solution {
public:
    long long computeYcoverage(vector<pair<int,int>>& active) {
        if (active.empty()) return 0;

        sort(active.begin(), active.end());

        long long height = 0;
        long long start = active[0].first;
        long long end = active[0].second;

        for (int i = 1; i < active.size(); i++) {
            if (active[i].first > end) {
                height += (end - start);
                start = active[i].first;
                end = active[i].second;
            } else {
                end = max(end, (long long)active[i].second);
            }
        }

        height += (end - start);
        return height;
    }

    int rectangleArea(vector<vector<int>>& rectangles) {
        const int mod = 1e9 + 7;
        vector<vector<int>> events;

        // Step 1: Generate events
        for (auto& p : rectangles) {
            events.push_back({p[0], p[1], p[3], +1}); // entering edge
            events.push_back({p[2], p[1], p[3], -1}); // leaving edge
        }

        // Step 2: Sort by x
        sort(events.begin(), events.end());

        vector<pair<int,int>> active;
        long long prev_x = 0, area = 0;

        // Step 3: Sweep through events
        for (int i = 0; i < events.size(); i++) {
            int x = events[i][0], y1 = events[i][1], y2 = events[i][2], type = events[i][3];

            if (i > 0) {
                long long width = x - prev_x;
                if (width > 0) {
                    long long Ycover = computeYcoverage(active);
                    area = (area + width * Ycover) % mod;
                }
            }

            // Step 4: Update active intervals
            if (type == 1) {
                active.push_back({y1, y2});
            } else {
                auto it = find(active.begin(), active.end(), make_pair(y1, y2));
                if (it != active.end()) active.erase(it);
            }

            prev_x = x;
        }

        return (int)(area % mod);
    }
};


int main(){

  int n;
  cout<<"Enter the size of the array : \n";
  cin>>n;

  vector<vector<int>>arr(n,vector<int>(4,0));

  for(int i=0;i<n;i++){

    for(int j=0;j<4;j++){

      cin>>arr[i][j];
    }
  }

  Solution s;

  int max_area = s.rectangleArea(arr);

  cout<<"The area of the rectangle is : \n"<<max_area<<endl;

  return 0;
}