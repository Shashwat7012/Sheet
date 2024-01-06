class Solution {
public:
vector<int> generateRow(int row){
    vector<int> ansRow;
    ansRow.push_back(1); // Start each row with 1
    long long ans = 1; // Initialize ans as 1
    for(int col = 1; col < row; col++){
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> ans;
    for(int i = 0; i < N; i++){
        vector<int> temp = generateRow(i + 1); // Generating row i+1
        ans.push_back(temp);
    }
    return ans;
}

    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> ans;
    for(int i = 0; i < numRows; i++){
        vector<int> temp = generateRow(i + 1); // Generating row i+1
        ans.push_back(temp);
    }
    return ans;
    }
};