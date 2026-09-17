class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1) return true;
        bool inc=true;
        bool dec=true;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1])
                dec=false;
        }
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
                inc=false;
        }
        if(inc || dec)
            return true;
        else
            return false;
    }
};