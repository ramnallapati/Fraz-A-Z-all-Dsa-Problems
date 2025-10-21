#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> rows(n, 0);
        vector<int> cols(m, 0);

        // Find maximum height in each row and column
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                rows[i] = max(rows[i], grid[i][j]);
                cols[j] = max(cols[j], grid[i][j]);
            }
        }

        int total_allowed = 0;
        // Calculate total increase possible while maintaining skyline
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int allowed = min(rows[i], cols[j]);
                total_allowed += (allowed - grid[i][j]);
            }
        }
        return total_allowed;
    }
};

int main() {
    int rows, cols;
    cout << "Enter number of rows in grid: ";
    cin >> rows;
    cout << "Enter number of columns in grid: ";
    cin >> cols;

    vector<vector<int>> grid(rows, vector<int>(cols));
    cout << "Enter grid values row by row:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> grid[i][j];
        }
    }

    Solution solution;
    int result = solution.maxIncreaseKeepingSkyline(grid);
    cout << "Maximum total increase while keeping skyline: " << result << endl;

    return 0;
}
