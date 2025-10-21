#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(i == j || i + j == n - 1) {
                    if(grid[i][j] == 0) return false;
                } else {
                    if(grid[i][j] != 0) return false;
                }
            }
        }
        return true;
    }
};

int main() {
    int n;
    cout << "Enter size of the square matrix: ";
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    cout << "Enter matrix elements row-wise:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    Solution solution;
    bool result = solution.checkXMatrix(grid);

    if(result) {
        cout << "The matrix is an X-Matrix.\n";
    } else {
        cout << "The matrix is NOT an X-Matrix.\n";
    }

    return 0;
}
