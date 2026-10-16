class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>prefixsum(nums.size()+1,0);
        for(int i=0;i<queries.size();i++)
        {
            prefixsum[queries[i][0]]-=1;
            prefixsum[queries[i][1]+1]+=1;
        }
        for(int i=1;i<nums.size()+1;i++)
        {
            prefixsum[i]+=prefixsum[i-1];
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]+=prefixsum[i];
            if(nums[i]>0)
                return false;
        }
        return true;
    }
};