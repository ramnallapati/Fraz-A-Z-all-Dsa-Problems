#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mpp;
        for (int val : arr) {
            mpp[val]++;
        }

        unordered_set<int> st;
        for (auto& it : mpp) {
            if (st.find(it.second) != st.end())
                return false;
            st.insert(it.second);
        }
        return true;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in array: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    bool res = sol.uniqueOccurrences(arr);

    if (res)
        cout << "All occurrence counts are unique.\n";
    else
        cout << "Some occurrence counts are repeated.\n";

    return 0;
}
