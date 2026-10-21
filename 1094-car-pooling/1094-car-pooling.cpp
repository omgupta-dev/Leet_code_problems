class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int>nums(1002,0);
        for(int i=0;i<trips.size();i++)
        {
            nums[trips[i][1]]+=trips[i][0];
            nums[trips[i][2]]-=trips[i][0];
        }
        for(int i=1;i<nums.size();i++)
        {
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<1001;i++)
        {
            if(nums[i]>capacity)
                return false;
        }
        return true;
    }
};