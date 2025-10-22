#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n = rowSum.size();
        int m = colSum.size();
        vector<vector<int>> result(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int val = min(rowSum[i], colSum[j]);
                result[i][j] = val;
                rowSum[i] -= val;
                colSum[j] -= val;
            }
        }

        return result;
    }
};

int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;

    vector<int> rowSum(n);
    vector<int> colSum(m);

    cout << "Enter row sums:\n";
    for (int i = 0; i < n; i++) {
        cin >> rowSum[i];
    }

    cout << "Enter column sums:\n";
    for (int j = 0; j < m; j++) {
        cin >> colSum[j];
    }

    Solution sol;
    vector<vector<int>> matrix = sol.restoreMatrix(rowSum, colSum);

    cout << "Restored matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
