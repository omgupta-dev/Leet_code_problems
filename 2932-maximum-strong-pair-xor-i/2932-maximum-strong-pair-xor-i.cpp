class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        vector<int>x;
        vector<int>y;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                if(abs(nums[i]-nums[j])<=min(nums[i],nums[j]))
                {
                    x.push_back(nums[i]);
                    y.push_back(nums[j]);
                }
            }
        }
        if(x.empty()) return 0;
        int mxor=x[0]^y[0];
        for(int i=0;i<x.size();i++)
        {
            if(mxor<(x[i]^y[i]))
                mxor=x[i]^y[i];
        }
        return mxor;
    }
};