#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> spiral_matrix(n, vector<int>(n, 0));

        int left = 0;
        int right = n - 1;
        int top = 0;
        int bottom = n - 1;
        int count = 1;

        while (left <= right && top <= bottom) {
            // Top row
            for (int col = left; col <= right; col++) {
                spiral_matrix[top][col] = count++;
            }
            top++;

            // Right column
            for (int row = top; row <= bottom; row++) {
                spiral_matrix[row][right] = count++;
            }
            right--;

            // Bottom row
            if (top <= bottom) {
                for (int col = right; col >= left; col--) {
                    spiral_matrix[bottom][col] = count++;
                }
                bottom--;
            }

            // Left column
            if (left <= right) {
                for (int row = bottom; row >= top; row--) {
                    spiral_matrix[row][left] = count++;
                }
                left++;
            }
        }

        return spiral_matrix;
    }
};

int main() {
    int n;
    cout << "Enter the size n for the n x n spiral matrix: ";
    cin >> n;

    Solution sol;
    vector<vector<int>> result = sol.generateMatrix(n);

    cout << "Generated " << n << "x" << n << " Spiral Matrix:\n";
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
