#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<int> rows_ones(n, 0);
        vector<int> cols_ones(m, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    rows_ones[i]++;
                    cols_ones[j]++;
                } else {
                    rows_ones[i]--;
                    cols_ones[j]--;
                }
            }
        }

        vector<vector<int>> result(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                result[i][j] = rows_ones[i] + cols_ones[j];
            }
        }
        return result;
    }
};

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    cout << "Enter the matrix elements row-wise (0 or 1):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    Solution sol;
    vector<vector<int>> result = sol.onesMinusZeros(grid);

    cout << "Result matrix:\n";
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }
    return 0;
}
