class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        for(int i=0;i<rowShift.size();i++)
        {
            while(rowShift[i])
            {
                int temp=grid[i][0];
                for(int j=0;j<n-1;j++)
                {
                    grid[i][j]=grid[i][j+1];
                }
                grid[i][n-1]=temp;
                rowShift[i]--;
            }
        }
        for(int i=0;i<colShift.size();i++)
        {
            while(colShift[i])
            {
                int temp=grid[0][i];
                for(int j=0;j<n-1;j++)
                {
                    grid[j][i]=grid[j+1][i];
                }
                grid[n-1][i]=temp;
                colShift[i]--;
            }
        }
        return grid;
    }
};