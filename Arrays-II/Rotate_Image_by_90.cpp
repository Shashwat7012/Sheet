class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(); // Assuming it's a square matrix

        vector<vector<int>>ans(n,vector<int>(n,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[j][n-1-i] = matrix[i][j];
                // matrix[i][j] = matrix[j][i];

            }
        }
        // matrix = ans;
        matrix = ans;
        // making the reverse of it.
    }
};
