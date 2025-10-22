#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValid(int row, int col, int n, int m) {
        return row >= 0 && row < n && col >= 0 && col < m;
    }

    bool checkMove(vector<vector<char>>& board, int row, int col, char color) {
        int n = board.size();
        int m = board[0].size();

        if (board[row][col] != '.') return false;

        char opponent = (color == 'W') ? 'B' : 'W';

        vector<vector<int>> directions = {
            {-1,-1}, {-1,0}, {-1,1},
            {0,-1},          {0,1},
            {1,-1},  {1,0},  {1,1}
        };

        for (const auto& d : directions) {
            int r = row + d[0];
            int c = col + d[1];
            bool foundOpponent = false;

            while (isValid(r, c, n, m) && board[r][c] == opponent) {
                r += d[0];
                c += d[1];
                foundOpponent = true;
            }

            if (foundOpponent && isValid(r, c, n, m) && board[r][c] == color)
                return true;
        }
        return false;
    }
};

int main() {
    int n, m;
    cout << "Enter board dimensions (rows and cols): ";
    cin >> n >> m;

    vector<vector<char>> board(n, vector<char>(m));
    cout << "Enter the board rows (use '.' for empty, 'W' for white, 'B' for black):\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> board[i][j];

    int row, col;
    char color;
    cout << "Enter move row and column (0-based) and color (W or B): ";
    cin >> row >> col >> color;

    Solution sol;
    if (sol.checkMove(board, row, col, color)) {
        cout << "Move is valid.\n";
    } else {
        cout << "Move is invalid.\n";
    }

    return 0;
}
