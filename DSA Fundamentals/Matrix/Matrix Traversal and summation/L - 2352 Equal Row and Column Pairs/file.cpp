#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        unordered_map<string,int> mpp;

        for(int i=0; i<n; i++){
            string str = "";
            for(int j=0; j<m; j++){
                str += to_string(grid[i][j]) + "#";
            }
            mpp[str]++;
        }

        int count = 0;

        for(int i=0; i<m; i++){
            string res = "";
            for(int j=0; j<n; j++){
                res += to_string(grid[j][i]) + "#";
            }

            if(mpp.find(res) != mpp.end()) count += mpp[res];
        }
        return count;
    }
};

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    cout << "Enter the grid elements row-wise:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> grid[i][j];
        }
    }

    Solution sol;
    int result = sol.equalPairs(grid);

    cout << "Number of equal row-column pairs: " << result << endl;
    return 0;
}
