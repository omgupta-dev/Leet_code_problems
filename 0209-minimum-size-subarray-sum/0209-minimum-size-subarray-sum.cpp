class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0;
        int end=0;
        int wsum=0;
        int mlen=INT_MAX;
        while(end<nums.size())
        {
            wsum+=nums[end];
            while(wsum>=target)
            {
                mlen=min(mlen,end-start+1);
                wsum-=nums[start++];
            }
            end++;
        }
        if(mlen==INT_MAX)
            return 0;
        return mlen;
    }
};