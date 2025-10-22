#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        int n = queens.size();
        vector<vector<bool>> board(8, vector<bool>(8, false));

        for (int i = 0; i < n; i++) {
            board[queens[i][0]][queens[i][1]] = true;
        }

        vector<vector<int>> directions = {
            {-1, 0}, {1, 0},     // up, down
            {0, -1}, {0, 1},     // left, right
            {-1, -1}, {-1, 1},   // upper-left, upper-right
            {1, -1}, {1, 1}      // lower-left, lower-right
        };

        vector<vector<int>> result;

        for (auto &dir : directions) {
            int r = king[0];
            int c = king[1];

            while (true) {
                r += dir[0];
                c += dir[1];

                if (r < 0 || r >= 8 || c < 0 || c >= 8) break;

                if (board[r][c]) {
                    result.push_back({r, c});
                    break;
                }
            }
        }

        return result;
    }
};

int main() {
    int q;
    cout << "Enter number of queens: ";
    cin >> q;

    vector<vector<int>> queens(q, vector<int>(2));
    cout << "Enter queen positions (row and column) one per line:\n";
    for (int i = 0; i < q; i++) {
        cin >> queens[i][0] >> queens[i][1];
    }

    vector<int> king(2);
    cout << "Enter king position (row and column): ";
    cin >> king[0] >> king[1];

    Solution solution;
    vector<vector<int>> attackingQueens = solution.queensAttacktheKing(queens, king);

    cout << "Queens that can attack the king:\n";
    for (const auto &pos : attackingQueens) {
        cout << pos[0] << " " << pos[1] << "\n";
    }

    return 0;
}
