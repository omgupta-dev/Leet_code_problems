class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<int>v(matrix[0].size());
        for(int i=0;i<matrix[0].size();i++)
        {
            int maxi=matrix[0][i];
            for(int j=0;j<matrix.size();j++)
            {
                if(maxi<matrix[j][i])
                    maxi=matrix[j][i];
            }
            v[i]=maxi;
        }
        for(int i=0;i<matrix[0].size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                if(matrix[j][i]==-1)
                    matrix[j][i]=v[i];
            }
        }
        return matrix;
    }
};