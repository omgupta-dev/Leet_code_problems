class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreach=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(maxreach<i)
                return false;
            if(maxreach<i+nums[i])
                maxreach=i+nums[i];
        }
        if(maxreach>=nums.size()-1)
            return true;
        else
            return false;
    }
};