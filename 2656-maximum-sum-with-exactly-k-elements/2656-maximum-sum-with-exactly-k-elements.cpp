class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>maxi)
                maxi=nums[i];
        }
        int ans=0;
        while(k)
        {
            ans+=maxi;
            maxi++;
            k--;
        }
        return ans;
    }
};