class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        int ans=0;
        int flag=0;
        for(int i=0;i<nums.size();i++)
        {
            if(temp[i]!=nums[i])
            {
                if(ans==0 && flag==0)
                {
                    ans=nums[i];
                    flag=1;
                }
                else
                    ans&=nums[i];
            }
        }
        return ans;
    }
};