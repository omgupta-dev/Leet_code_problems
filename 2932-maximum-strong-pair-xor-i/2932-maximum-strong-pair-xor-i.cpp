class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int mxor=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                int x=(nums[i]^nums[j]);
                if(mxor<x && abs(nums[i]-nums[j])<=min(nums[i],nums[j]))
                {
                    mxor=x;
                }
            }
        }
        return mxor;
    }
};