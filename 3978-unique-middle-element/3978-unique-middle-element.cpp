class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums[nums.size()/2];
        vector<int>freq(101,0);
        for(int i=0;i<nums.size();i++)
            freq[nums[i]]++;
        if(freq[n]!=1)
            return false;
        return true;
    }
};