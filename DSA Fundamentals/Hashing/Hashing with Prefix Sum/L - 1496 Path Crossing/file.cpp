#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<long long> st;
        int row = 0, col = 0;

        st.insert(0LL);

        for (char c : path) {
            if (c == 'N') row--;
            else if (c == 'S') row++;
            else if (c == 'E') col++;
            else col--;

            long long pos = (static_cast<long long>(row) << 32) | (col & 0xffffffffLL);

            if (st.count(pos))
                return true;

            st.insert(pos);
        }

        return false;
    }
};

int main() {
    string path;
    cout << "Enter path consisting of N, S, E, W: ";
    cin >> path;

    Solution sol;
    bool result = sol.isPathCrossing(path);

    cout << (result ? "Path crosses itself." : "Path does not cross.") << endl;

    return 0;
}
