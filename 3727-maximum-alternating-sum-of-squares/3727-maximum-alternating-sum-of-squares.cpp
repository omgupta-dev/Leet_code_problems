class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            nums[i]=abs(nums[i]);
        sort(nums.begin(),nums.end());
        int l=0,r=nums.size()-1;
        vector<int>arr(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(i&1)
                arr[i]=nums[l++];
            else
                arr[i]=nums[r--];
        }
        long long ans=0;
        for(int i=0;i<arr.size();i++)
        {
            if(i&1)
                ans-=arr[i]*arr[i];
            else
                ans+=arr[i]*arr[i];
        }
        return ans;
    }
};