class Solution {
public:
    void set(vector<vector<int>>& matrix, int row, int col, int n, int m) {
        for (int i = 0; i < n; i++)
            matrix[i][col] = 0;

        for (int j = 0; j < m; j++)
            matrix[row][j] = 0;
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<pair<int, int>> mp;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    mp.push_back({i, j});
                }
            }
        }

        for (int i = 0; i < mp.size(); i++) {
            set(matrix, mp[i].first, mp[i].second, n, m);
        }
    }
};