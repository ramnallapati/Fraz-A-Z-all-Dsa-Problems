#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < m - 1; j++) {
                int countBlack = 0, countWhite = 0;
                for (int x = i; x < i + 2; x++) {
                    for (int y = j; y < j + 2; y++) {
                        if (grid[x][y] == 'B')
                            countBlack++;
                        else
                            countWhite++;
                    }
                }
                if (countBlack >= 3 || countWhite >= 3)
                    return true;
            }
        }
        return false;
    }
};

int main() {
    int n, m;
    cout << "Enter number of rows and columns in grid: ";
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    cout << "Enter grid characters row-wise (use 'B' for black, others for white):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    Solution solution;
    bool result = solution.canMakeSquare(grid);

    if (result)
        cout << "There exists a 2x2 square with at least 3 cells of the same color.\n";
    else
        cout << "No such 2x2 square exists.\n";

    return 0;
}
