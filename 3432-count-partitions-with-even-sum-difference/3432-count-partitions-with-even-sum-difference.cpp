class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int lsum=0;
        int rsum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
            rsum+=nums[i];
        for(int i=0;i<nums.size()-1;i++)
        {
            rsum-=nums[i];
            lsum+=nums[i];
            if((lsum-rsum)%2==0)
                ans++;
        }
        return ans;
    }
};