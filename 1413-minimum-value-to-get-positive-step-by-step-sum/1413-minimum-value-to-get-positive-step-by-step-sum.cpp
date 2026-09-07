class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int csum=0;
        int msum=0;
        for(int i=0;i<nums.size();i++)
        {
            csum+=nums[i];
            if(csum<msum)
                msum=csum;
        }
        return abs(msum)+1;
    }
};