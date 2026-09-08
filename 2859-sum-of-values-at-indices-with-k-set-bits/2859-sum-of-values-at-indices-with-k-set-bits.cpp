class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int temp=i;
            int p=0;
            while(temp)
            {
                if(temp%2)
                    p++;
                temp/=2;
            }
            if(p==k)
                ans+=nums[i];
        }
        return ans;
    }
};