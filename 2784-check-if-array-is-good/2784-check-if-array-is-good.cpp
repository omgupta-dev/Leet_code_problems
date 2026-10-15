class Solution {
public:
    bool isGood(vector<int>& nums) {
        vector<int>freq(201,0);
        int maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(maxi<nums[i])
                maxi=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        for(int i=1;i<201;i++)
        {
            if(i==maxi && freq[i]!=2)
                return false;
            else if(i<maxi && freq[i]!=1)
                return false;
        }
        return true;
    }
};