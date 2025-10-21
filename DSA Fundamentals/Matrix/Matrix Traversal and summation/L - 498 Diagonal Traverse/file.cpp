#include <iostream>
#include <vector>
#include <algorithm> // for reverse
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int diagonals = (n + m) - 1;
        vector<int> result;
        int count = 1;

        for (int d = 0; d < diagonals; d++) {
            int row = (d < m) ? 0 : d - m + 1;
            int col = (d < m) ? d : m - 1;
            vector<int> temp;

            while (row < n && col >= 0) {
                temp.push_back(mat[row][col]);
                row++;
                col--;
            }

            if (count % 2 != 0) reverse(temp.begin(), temp.end());

            result.insert(result.end(), temp.begin(), temp.end());
            count++;
        }
        return result;
    }
};

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    cout << "Enter the matrix elements row-wise:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    Solution sol;
    vector<int> res = sol.findDiagonalOrder(mat);

    cout << "Diagonal traversal of the matrix is: ";
    for (int val : res)
        cout << val << " ";
    cout << endl;

    return 0;
}
