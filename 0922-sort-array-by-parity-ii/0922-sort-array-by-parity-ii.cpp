class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&1)
                odd.push_back(nums[i]);
            else
                even.push_back(nums[i]);
        }
        vector<int>ans(nums.size());
        int o=0;
        int e=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i&1)
                ans[i]=odd[o++];
            else
                ans[i]=even[e++];
        }
        return ans;
    }
};