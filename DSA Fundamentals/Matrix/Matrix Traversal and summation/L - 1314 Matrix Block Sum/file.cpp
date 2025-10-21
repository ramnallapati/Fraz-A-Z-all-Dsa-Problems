#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> prefixSum(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                prefixSum[i][j] = mat[i - 1][j - 1] + prefixSum[i - 1][j]
                                  + prefixSum[i][j - 1] - prefixSum[i - 1][j - 1];
            }
        }

        vector<vector<int>> result(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int r1 = max(0, i - k);
                int c1 = max(0, j - k);
                int r2 = min(n - 1, i + k);
                int c2 = min(m - 1, j + k);

                // offset by 1 due to prefixSum indexing
                r1++; c1++; r2++; c2++;

                result[i][j] = prefixSum[r2][c2] - prefixSum[r1 - 1][c2] 
                               - prefixSum[r2][c1 - 1] + prefixSum[r1 - 1][c1 - 1];
            }
        }

        return result;
    }
};

int main() {
    int n, m, k;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;
    cout << "Enter k (block radius): ";
    cin >> k;

    vector<vector<int>> mat(n, vector<int>(m));
    cout << "Enter the matrix elements row-wise:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    Solution sol;
    vector<vector<int>> result = sol.matrixBlockSum(mat, k);

    cout << "Result matrix block sums:\n";
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
