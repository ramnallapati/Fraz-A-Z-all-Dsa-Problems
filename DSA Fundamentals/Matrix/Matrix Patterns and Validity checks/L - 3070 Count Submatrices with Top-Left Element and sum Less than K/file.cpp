#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> prefixSum(n, vector<int>(m, 0));
        int count_submatrices = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                prefixSum[i][j] = grid[i][j];
                if (i > 0) prefixSum[i][j] += prefixSum[i - 1][j];
                if (j > 0) prefixSum[i][j] += prefixSum[i][j - 1];
                if (i > 0 && j > 0) prefixSum[i][j] -= prefixSum[i - 1][j - 1];

                if (prefixSum[i][j] <= k) count_submatrices++;
            }
        }

        return count_submatrices;
    }
};

int main() {
    int n, m, k;
    cout << "Enter grid rows, columns, and target k: ";
    cin >> n >> m >> k;

    vector<vector<int>> grid(n, vector<int>(m));
    cout << "Enter grid values row-wise:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    Solution sol;
    int result = sol.countSubmatrices(grid, k);
    cout << "Count of prefix submatrices with sum <= k: " << result << endl;

    return 0;
}
