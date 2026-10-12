class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int product=INT_MIN;
        vector<int>ans={};
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                {
                    if(nums[i]+nums[j]==target && nums[i]*nums[j]>product)
                    {
                        ans={i,j};
                        product=nums[i]*nums[j];
                    }
                }
            }
        }
        if(!ans.empty())
            return ans;
        return {-1,-1};
    }
};