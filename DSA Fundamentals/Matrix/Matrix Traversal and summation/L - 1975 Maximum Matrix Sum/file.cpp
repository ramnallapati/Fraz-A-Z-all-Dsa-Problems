#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

class Solution {
public:
    long long maxSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        long long sum = 0;
        int count = 0;
        long long min_val = LLONG_MAX;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                sum += (long long)abs(matrix[i][j]);
                if(matrix[i][j] < 0) count++;
                min_val = min(min_val, (long long)abs(matrix[i][j]));
            }
        }

        return (count % 2 == 0) ? sum : sum - 2 * min_val;
    }
};

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Enter matrix elements row-wise:\n";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];

    Solution sol;
    long long result = sol.maxSum(matrix);

    cout << "Maximum sum of matrix after sign flips: " << result << endl;
    return 0;
}
