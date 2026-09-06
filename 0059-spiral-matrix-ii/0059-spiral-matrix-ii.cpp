class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int total=n*n;
        int startrow=0;
        int endrow=n-1;
        int startcol=0;
        int endcol=n-1;
        int count=0;
        while(count<total)
        {
            //starting row
            for(int i=startcol;i<=endcol && count<total;i++)
            {
                ans[startrow][i]=count+1;
                count++;
            }
            startrow++;
            //ending column
            for(int i=startrow;i<=endrow && count<total;i++)
            {
                ans[i][endcol]=count+1;
                count++;
            }
            endcol--;
            //ending row
            for(int i=endcol;i>=startcol && count<total;i--)
            {
                ans[endrow][i]=count+1;
                count++;
            }
            endrow--;
            //startcol
            for(int i=endrow;i>=startrow && count<total;i--)
            {
                ans[i][startcol]=count+1;
                count++;
            }
            startcol++;
        }
        return ans;
    }
};