class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int ans=0;
        while(k)
        {
            ans+=nums[0];
            nums[0]++;
            k--;
        }
        return ans;
    }
};