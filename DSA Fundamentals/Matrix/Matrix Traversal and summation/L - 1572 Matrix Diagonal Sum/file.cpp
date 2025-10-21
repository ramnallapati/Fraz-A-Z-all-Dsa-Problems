#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int sum = 0;
        int col1 = 0;
        int col2 = m - 1;

        for(int i = 0; i < n; i++) {
            if(col1 == col2) {
                sum += mat[i][col1];
                col1++;
                col2--;
            } else {
                sum += mat[i][col1];
                sum += mat[i][col2];
                col1++;
                col2--;
            }
        }

        return sum;
    }
};

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    cout << "Enter the matrix elements row-wise:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }

    Solution sol;
    int result = sol.diagonalSum(mat);

    cout << "Sum of diagonals is: " << result << endl;

    return 0;
}
