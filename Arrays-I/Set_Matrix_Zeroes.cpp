#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
	int m = matrix[0].size();
	vector<int>row(n,0);
	vector<int>col(m,0);

	//looping for conversion of row and col to 1;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				row[i] = 1;
				col[j] = 1;

			}
		}
	}
	// converting that row and col to zero;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(row[i]||col[j]==1){
				matrix[i][j] = 0;
			}
		}
	}



}