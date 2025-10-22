#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> result(n - 2, vector<int>(m - 2, 0));

        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < m - 2; j++) {
                int max_value = grid[i][j];

                for (int r = i; r < i + 3; r++) {
                    for (int l = j; l < j + 3; l++) {
                        max_value = max(max_value, grid[r][l]);
                    }
                }

                result[i][j] = max_value;
            }
        }

        return result;
    }
};

int main() {
    int n, m;
    cout << "Enter number of rows and columns (n x n matrix): ";
    cin >> n >> m;

    if (n < 3 || m < 3) {
        cout << "Matrix size must be at least 3x3." << endl;
        return 0;
    }

    vector<vector<int>> grid(n, vector<int>(m));
    cout << "Enter matrix elements row-wise:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    Solution sol;
    vector<vector<int>> localMax = sol.largestLocal(grid);

    cout << "Largest local values in each 3x3 submatrix:\n";
    for (const auto& row : localMax) {
        for (int val : row) cout << val << " ";
        cout << "\n";
    }

    return 0;
}
