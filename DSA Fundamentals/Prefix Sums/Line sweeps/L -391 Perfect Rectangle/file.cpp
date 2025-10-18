
#include<iostream>
#include<vector>
#include<climits>
#include<set>

using namespace std;

class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        int n = rectangles.size();
        if(n == 0) return false;

        // Step 1: Find bounding rectangle and sum of small rectangle areas
        int minX = INT_MAX, minY = INT_MAX;
        int maxX = INT_MIN, maxY = INT_MIN;
        long long totalSmallArea = 0;

        for(auto &rect : rectangles) {
            int x1 = rect[0], y1 = rect[1];
            int x2 = rect[2], y2 = rect[3];

            totalSmallArea += (long long)(x2 - x1) * (y2 - y1);

            minX = min(minX, x1);
            minY = min(minY, y1);
            maxX = max(maxX, x2);
            maxY = max(maxY, y2);
        }

        long long boundingArea = (long long)(maxX - minX) * (maxY - minY);
        if(totalSmallArea != boundingArea) return false;

        // Step 2: Track corners
        set<pair<int,int>> corners;

        for(auto &rect : rectangles) {
            pair<int,int> bl = {rect[0], rect[1]}; // bottom-left
            pair<int,int> br = {rect[2], rect[1]}; // bottom-right
            pair<int,int> tl = {rect[0], rect[3]}; // top-left
            pair<int,int> tr = {rect[2], rect[3]}; // top-right

            for(auto &p : {bl, br, tl, tr}) {
                if(corners.count(p)) {
                    corners.erase(p); // internal corner, remove
                } else {
                    corners.insert(p); // first time, insert
                }
            }
        }

        // Step 3: Check final corners
        if(corners.size() != 4) return false;
        if(!corners.count({minX,minY}) || !corners.count({minX,maxY}) ||
           !corners.count({maxX,minY}) || !corners.count({maxX,maxY})) return false;

        return true;
    }
};


int main() {

  int n;
  cout<<"Enter the size of the rectangle : \n";
  cin>>n;

  vector<vector<int>>rectangle(n,vector<int>(4,0));

  for(int i=0;i<n;i++){
    for(int j=0;j<4;j++){
      cin>>rectangle[i][j];
    }
  }

  Solution s;
  bool isPerfect =s.isRectangleCover(rectangle);

  cout<<"The given rectangle is Perfect rectangle : \n"<<isPerfect<<endl;

  return 0;
}