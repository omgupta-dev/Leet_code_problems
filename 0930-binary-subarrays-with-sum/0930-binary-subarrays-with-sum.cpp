class Solution {
    int subarray(vector<int>&nums,int goal)
    {
        if(goal<0) return 0;
        int l=0,r=0,sum=0,count=0;
        while(r<nums.size())
        {
            sum+=nums[r];
            while(sum>goal)
            {
                sum-=nums[l++];
            }
            count+=(r-l+1);
            r++;
        }
        return count;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return (subarray(nums,goal)-subarray(nums,goal-1));
    }
};