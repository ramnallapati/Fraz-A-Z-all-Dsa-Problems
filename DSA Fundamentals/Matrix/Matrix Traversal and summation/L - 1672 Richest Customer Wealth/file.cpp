#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_sum = 0;
        for (int i = 0; i < accounts.size(); i++) {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }
            if (sum > max_sum) max_sum = sum;
        }
        return max_sum;
    }
};

int main() {
    int n, m; // n = number of customers, m = number of accounts each
    cout << "Enter number of customers and accounts: ";
    cin >> n >> m;

    vector<vector<int>> accounts(n, vector<int>(m));
    cout << "Enter wealth values for each customer in each account:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> accounts[i][j];
        }
    }

    Solution sol;
    int maxWealth = sol.maximumWealth(accounts);

    cout << "Maximum wealth is: " << maxWealth << endl;

    return 0;
}
