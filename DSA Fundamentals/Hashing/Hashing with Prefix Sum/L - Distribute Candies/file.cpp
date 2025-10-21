#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_map<int,int> mpp;

        for(int i=0; i<n; i++) {
            mpp[candyType[i]]++;
        }

        int m = mpp.size();

        return m <= n/2 ? m : n/2;
    }
};

int main() {
    int n;
    cout << "Enter number of candies: ";
    cin >> n;

    vector<int> candies(n);
    cout << "Enter types of candies:\n";
    for (int i = 0; i < n; i++) {
        cin >> candies[i];
    }

    Solution sol;
    int result = sol.distributeCandies(candies);

    cout << "Maximum number of different candy types Alice can eat: " << result << endl;

    return 0;
}
