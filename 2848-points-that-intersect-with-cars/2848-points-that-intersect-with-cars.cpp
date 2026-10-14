class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int>points(101,0);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=nums[i][0];j<=nums[i][1];j++)
                points[j]++;
        }
        int ans=0;
        for(int i=0;i<points.size();i++)
        {
            if(points[i]!=0)
                ans++;
        }
        return ans;
    }
};