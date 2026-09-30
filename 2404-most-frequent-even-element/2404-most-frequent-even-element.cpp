class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                m[nums[i]]++;
        }
        int mcount=0;
        for(auto i : m)
        {
            if(mcount<i.second)
                mcount=i.second;
        }
        if(!mcount) return -1;
        for(auto i : m)
        {
            if(i.second==mcount)
                return i.first;
        }
        return -1;
    }
};