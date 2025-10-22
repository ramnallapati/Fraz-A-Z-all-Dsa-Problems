#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int total = 0, bars = 0;
        for (int c : costs) {
            if (total + c > coins) break;
            total += c;
            bars++;
        }
        return bars;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int coins;
    cin >> coins;

    Solution s;
    cout << s.maxIceCream(arr, coins) << endl;
    return 0;
}
