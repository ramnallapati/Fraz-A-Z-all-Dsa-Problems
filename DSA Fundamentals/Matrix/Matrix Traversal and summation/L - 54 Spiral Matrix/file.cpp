#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int row_start = 0;
        int row_end = n - 1;
        int col_start = 0;
        int col_end = m - 1;

        vector<int> result;

        while (row_start <= row_end && col_start <= col_end) {
            for (int col = col_start; col <= col_end; col++) {
                result.push_back(matrix[row_start][col]);
            }
            row_start++;

            for (int row = row_start; row <= row_end; row++) {
                result.push_back(matrix[row][col_end]);
            }
            col_end--;

            if (row_start <= row_end) {
                for (int col = col_end; col >= col_start; col--) {
                    result.push_back(matrix[row_end][col]);
                }
                row_end--;
            }

            if (col_start <= col_end) {
                for (int row = row_end; row >= row_start; row--) {
                    result.push_back(matrix[row][col_start]);
                }
                col_start++;
            }
        }
        return result;
    }
};

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter matrix elements row-wise:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    Solution sol;
    vector<int> spiral = sol.spiralOrder(matrix);

    cout << "Spiral order traversal of matrix:\n";
    for (int val : spiral)
        cout << val << " ";
    cout << endl;

    return 0;
}
