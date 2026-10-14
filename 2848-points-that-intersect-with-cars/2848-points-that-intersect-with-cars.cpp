class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int>points(102,0);
        for(int i=0;i<nums.size();i++)
        {
            points[nums[i][0]]++;
            points[nums[i][1]+1]--;
        }
        vector<int>prefixsum(102,0);
        prefixsum[0]=points[0];
        for(int i=1;i<102;i++)
        {
            prefixsum[i]=prefixsum[i-1]+points[i];
        }
        int ans=0;
        for(int i=0;i<102;i++)
        {
            if(prefixsum[i]!=0)
                ans++;
        }
        return ans;
    }
};