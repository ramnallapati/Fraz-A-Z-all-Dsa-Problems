#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int max_ones = 0;
        int lower_index = 0;

        for(int i=0;i<n;i++){
            int no_ones = 0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1)no_ones++;
            }
            if(no_ones > max_ones){
                lower_index = i;
                max_ones = no_ones;
            }
        }
        return {lower_index,max_ones};
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }

    Solution s;
    vector<int> result = s.rowAndMaximumOnes(mat);

    cout << result[0] << " " << result[1] << endl; // print row index and max ones count

    return 0;
}
