#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> minRow(n, INT_MAX), maxCol(m, INT_MIN);

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) {
                minRow[i] = min(minRow[i], matrix[i][j]);
                maxCol[j] = max(maxCol[j], matrix[i][j]);
            }

        vector<int> result;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (matrix[i][j] == minRow[i] && matrix[i][j] == maxCol[j])
                    result.push_back(matrix[i][j]);

        return result;
    }
};

int main() {
  
    int n, m;
    cout << "Enter the number of rows and columns in the matrix: ";
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter the elements of the matrix row-wise:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> matrix[i][j];

    Solution sol;
    vector<int> luckyNums = sol.luckyNumbers(matrix);

    cout << "Lucky numbers in the matrix are: ";
    for (int num : luckyNums)
        cout << num << " ";
    cout << endl;

    return 0;
}
