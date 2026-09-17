class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1) return true;
        int flag;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                flag=0;
            else if(nums[i]<nums[i+1])
            {
                flag=1;
                break;
            }
            else
            {
                flag=2;
                break;
            }
        }
        if(!flag) return true;
        else if(flag==1)
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]>nums[i+1])
                    return false;
            }
        }
        else
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]<nums[i+1])
                    return false;
            }
        }
        return true;
    }
};