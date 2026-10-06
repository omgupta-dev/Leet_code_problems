class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zeros=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                zeros++;
        }
        int ones=0;
        for(int i=nums.size()-zeros;i<nums.size();i++)
        {
            if(nums[i]!=0)
                ones++;
        }
        return ones;
    }
};