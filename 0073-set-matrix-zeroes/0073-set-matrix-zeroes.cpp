class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>x;
        vector<int>y;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if((find(x.begin(),x.end(),i)!=x.end()) || (find(y.begin(),y.end(),j)!=y.end()))
                {
                    matrix[i][j]=0;
                }
            }
        }

    }
};